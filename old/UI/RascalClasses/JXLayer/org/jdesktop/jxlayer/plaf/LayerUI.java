/**
 * Copyright (c) 2006-2008, Alexander Potochkin
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of the JXLayer project nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

package org.jdesktop.jxlayer.plaf;

import org.jdesktop.jxlayer.JXLayer;
import org.jdesktop.jxlayer.plaf.item.LayerItem;

import javax.accessibility.Accessible;
import javax.swing.*;
import javax.swing.plaf.ComponentUI;
import java.awt.*;

/**
 * The base class for all {@link JXLayer}'s UI delegates.
 * <p/>
 * {@link #paint(java.awt.Graphics, javax.swing.JComponent)} method performes the
 * painting of the {@code JXLayer}
 * and {@link #eventDispatched(AWTEvent, JXLayer)} method is notified
 * about any input or focus events which have been generated by a {@code JXLayer}
 * or any of its subcomponents.
 * <p/>
 * The {@code LayerUI} is different from UI delegates of the other components,
 * because it is LookAndFeel independent and is not updated by default when
 * the system LookAndFeel is changed.
 * <p/>
 * The subclasses of {@code LayerUI} can either be stateless and shareable
 * by multiple {@code JXLayer}s or not shareable.
 *
 * @see JXLayer#setUI(LayerUI)
 * @see AbstractLayerUI
 */
public abstract class LayerUI<V extends JComponent>
        extends ComponentUI implements LayerItem {

    /**
     * Paints the specified component.
     * Subclasses should override this method and use
     * the specified {@code Graphics} object to
     * render the content of the component.
     * <p/>
     * <b>Note:</b> Subclasses can safely cast the passed component
     * to the {@code JXLayer<V>} <br/> and the passed {@code Graphics}
     * to the {@code Graphics2D} instance.
     *
     * @param g the {@code Graphics} context in which to paint;
     * this object can be safely cast to the {@code Graphics2D} instance.
     * @param c the component being painted;
     * it can be safely cast to the {@code JXLayer<V>}
     */
    @Override
    public void paint(Graphics g, JComponent c) {
        super.paint(g, c);
    }

    /**
     * Dispatches all input and focus events from the {@link JXLayer}
     * and <b>all it subcomponents</b> to this {@code LayerUI}, 
     * when {@link LayerUI#isEnabled()} returns {@code true}.
     *
     * @param event the event to be dispatched
     * @param l the layer this LayerUI is set to
     */
    public void eventDispatched(AWTEvent event, JXLayer<V> l){
    }

    /**
     * Invoked when {@link JXLayer#updateUI()} is called
     * from the {@code JXLayer} this {@code LayerUI} is set to.
     *
     * @param l the {@code JXLayer} which UI is updated
     */
    public void updateUI(JXLayer<V> l){
    }

    /**
     * {@inheritDoc}
     *
     * {@link JXLayer} manages its painting in a different way
     * so this method doesn't call the {@link #paint(Graphics, JComponent)} method
     * after background is filled for the opaque {@code JXLayer}s.
     */
    @Override
    public final void update(Graphics g, JComponent c) {
        if (c.isOpaque()) {
            g.setColor(c.getBackground());
            g.fillRect(0, 0, c.getWidth(), c.getHeight());
        }
    }

    /**
     * {@inheritDoc}
     *
     * This method is not used and always returns {@code null}
     */
    @Override
    public final Dimension getMaximumSize(JComponent c) {
        return super.getMaximumSize(c);
    }

    /**
     * {@inheritDoc}
     *
     * This method is not used and always returns {@code null}
     */
    @Override
    public final Dimension getMinimumSize(JComponent c) {
        return super.getMinimumSize(c);
    }

    /**
     * {@inheritDoc}
     *
     * This method is not used and always returns {@code null}
     */
    @Override
    public final Dimension getPreferredSize(JComponent c) {
        return super.getPreferredSize(c);
    }

    /**
     * {@inheritDoc}
     */
    @Override
    public final Accessible getAccessibleChild(JComponent c, int i) {
        return super.getAccessibleChild(c, i);
    }

    /**
     * {@inheritDoc}
     */
    @Override
    public final int getAccessibleChildrenCount(JComponent c) {
        return super.getAccessibleChildrenCount(c);
    }
}
