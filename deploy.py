import json
import os
import re
import shutil


VERSION_REGEX = re.compile(r"(0|[1-9]\d*)\.(0|[1-9]\d*)\.(0|[1-9]\d*)"
                           r"(?:-((?:0|[1-9]\d*|\d*[a-zA-Z-][0-9a-zA-Z-]*)"
                           r"(?:\.(?:0|[1-9]\d*|\d *[a-zA-Z-][0-9a-zA-Z-]*))*))?"
                           r"(?:\+([0-9a-zA-Z-]+(?:\.[0-9a-zA-Z-]+)*))?")
DOCS_PATH = os.path.abspath(os.path.dirname(__file__))
VERSION_FILE = os.path.join(DOCS_PATH, 'API', 'version.txt')

doc_version = '1.0'

# with open(VERSION_FILE, 'r') as version_file:
#     version = version_file.read()
#     if os.environ.get('github.ref', 'main') != 'main':
#         major, minor, *other = list(VERSION_REGEX.match(version.replace(' ', '')).groups())
#         doc_version = f'{version[0]}.{version[1]}'

BUILD_PATH = os.path.join(DOCS_PATH, 'build', 'html')
WEB_PATH = os.path.join(DOCS_PATH, '_web', doc_version)

if os.path.isdir(WEB_PATH):
    shutil.rmtree(WEB_PATH, ignore_errors=True)

shutil.copytree(BUILD_PATH, WEB_PATH, ignore=shutil.ignore_patterns('.buildinfo', 'objects.inv', '.doctrees', 
                                                                    '_sphinx_design_static'))

releases = [entry.name for entry in os.scandir(os.path.join(DOCS_PATH, '_web')) if entry.is_dir() and entry.name != '.git']
switch_list = []
for release in releases:
    switch_list.append({'name': release, 
                        'version': release, 
                        'url': f'https://StephenNneji.github.io/RAT-Docs/{release}/'})

SWITCHER_FILE = os.path.join(DOCS_PATH, '_web', 'switcher.json')
with open(SWITCHER_FILE, 'w') as switcher_file:
    json.dump(switch_list, switcher_file)

INDEX_FILE = os.path.join(DOCS_PATH, '_web', 'index.html')
if not os.path.exists(INDEX_FILE) or os.environ.get('github.ref', 'main') != 'main':
    
    data = [
        '<!DOCTYPE html>\n',
        '<html>\n',
        '  <head>\n',
        f'    <title>Redirecting to https://rascalsoftware.github.io/RAT-Docs/{doc_version}/</title>\n',
        '    <meta charset="utf-8">\n',
        f'    <meta http-equiv="refresh" content="0; URL=https://rascalsoftware.github.io/RAT-Docs/{doc_version}/index.html">\n',
        f'    <link rel="canonical" href="https://rascalsoftware.github.io/RAT-Docs/{doc_version}/index.html">\n',
        '  </head>\n',
        '</html>',
    ]

    with open(INDEX_FILE, 'w') as index_file:
        index_file.writelines(data)
