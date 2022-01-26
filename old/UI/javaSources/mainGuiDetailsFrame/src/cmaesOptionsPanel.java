/*
 * cmaesOptionsPanel.java
 *
 * Created on 24 October 2008, 12:56
 */
import java.io.Serializable;
/**
 *
 * @author  avh45
 */
public class cmaesOptionsPanel extends javax.swing.JPanel implements Serializable {
    
    /** Creates new form cmaesOptionsPanel */
    public cmaesOptionsPanel() {
        initComponents();
    }

    public javax.swing.JTextField getMaxDelPBox() {
        return maxDelPBox;
    }

    public javax.swing.JTextField getMaxFunEvalsBox() {
        return maxFunEvalsBox;
    }

    public javax.swing.JTextField getMinDelPBox() {
        return minDelPBox;
    }

    public javax.swing.JTextField getPopSizeBox() {
        return popSizeBox;
    }

    public javax.swing.JComboBox getRecombWeightsCombo() {
        return recombWeightsCombo;
    }

    public javax.swing.JTextField getStopFunTolBox() {
        return stopFunTolBox;
    }

    public javax.swing.JTextField getStopParamTolBox() {
        return stopParamTolBox;
    }

    public javax.swing.JTextField getTargetChiSquaredBox() {
        return targetChiSquaredBox;
    }
    
    /** This method is called from within the constructor to
     * initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is
     * always regenerated by the Form Editor.
     */
    // <editor-fold defaultstate="collapsed" desc=" Generated Code ">//GEN-BEGIN:initComponents
    private void initComponents() {
        jLabel1 = new javax.swing.JLabel();
        jLabel2 = new javax.swing.JLabel();
        jLabel3 = new javax.swing.JLabel();
        jLabel4 = new javax.swing.JLabel();
        jLabel5 = new javax.swing.JLabel();
        jLabel6 = new javax.swing.JLabel();
        jLabel7 = new javax.swing.JLabel();
        jLabel8 = new javax.swing.JLabel();
        targetChiSquaredBox = new javax.swing.JTextField();
        maxFunEvalsBox = new javax.swing.JTextField();
        stopParamTolBox = new javax.swing.JTextField();
        stopFunTolBox = new javax.swing.JTextField();
        popSizeBox = new javax.swing.JTextField();
        maxDelPBox = new javax.swing.JTextField();
        minDelPBox = new javax.swing.JTextField();
        recombWeightsCombo = new javax.swing.JComboBox();

        jLabel1.setText("Target Chi Squared");

        jLabel2.setText("Maximum Function Evals");

        jLabel3.setText("Stop Param Tolerance");

        jLabel4.setText("Stop Function Tolrerance");

        jLabel5.setText("Population Size");

        jLabel6.setText("Maximum delta-parameter");

        jLabel7.setText("Minimum delta-parameter");

        jLabel8.setText("Recombination Weights");

        targetChiSquaredBox.setHorizontalAlignment(javax.swing.JTextField.CENTER);
        targetChiSquaredBox.setText("1");

        maxFunEvalsBox.setHorizontalAlignment(javax.swing.JTextField.CENTER);
        maxFunEvalsBox.setText("1e7");

        stopParamTolBox.setHorizontalAlignment(javax.swing.JTextField.CENTER);
        stopParamTolBox.setText("1e-7");

        stopFunTolBox.setHorizontalAlignment(javax.swing.JTextField.CENTER);
        stopFunTolBox.setText("1e-7");
        stopFunTolBox.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                stopFunTolBoxActionPerformed(evt);
            }
        });

        popSizeBox.setHorizontalAlignment(javax.swing.JTextField.CENTER);
        popSizeBox.setText("100");

        maxDelPBox.setHorizontalAlignment(javax.swing.JTextField.CENTER);
        maxDelPBox.setText("inf");

        minDelPBox.setHorizontalAlignment(javax.swing.JTextField.CENTER);
        minDelPBox.setText("0");

        recombWeightsCombo.setModel(new javax.swing.DefaultComboBoxModel(new String[] { "Superlinear Decrease", "Linear", "Equal" }));

        org.jdesktop.layout.GroupLayout layout = new org.jdesktop.layout.GroupLayout(this);
        this.setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
            .add(layout.createSequentialGroup()
                .addContainerGap()
                .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.TRAILING)
                    .add(org.jdesktop.layout.GroupLayout.LEADING, jLabel8, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 137, Short.MAX_VALUE)
                    .add(org.jdesktop.layout.GroupLayout.LEADING, jLabel7, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 137, Short.MAX_VALUE)
                    .add(org.jdesktop.layout.GroupLayout.LEADING, jLabel6, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 137, Short.MAX_VALUE)
                    .add(org.jdesktop.layout.GroupLayout.LEADING, jLabel5, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 137, Short.MAX_VALUE)
                    .add(org.jdesktop.layout.GroupLayout.LEADING, jLabel4, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 137, Short.MAX_VALUE)
                    .add(org.jdesktop.layout.GroupLayout.LEADING, jLabel3, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 137, Short.MAX_VALUE)
                    .add(org.jdesktop.layout.GroupLayout.LEADING, jLabel2, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 137, Short.MAX_VALUE)
                    .add(org.jdesktop.layout.GroupLayout.LEADING, jLabel1, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 137, Short.MAX_VALUE))
                .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
                    .add(maxDelPBox, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 266, Short.MAX_VALUE)
                    .add(popSizeBox, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 266, Short.MAX_VALUE)
                    .add(stopFunTolBox, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 266, Short.MAX_VALUE)
                    .add(stopParamTolBox, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 266, Short.MAX_VALUE)
                    .add(maxFunEvalsBox, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 266, Short.MAX_VALUE)
                    .add(targetChiSquaredBox, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 266, Short.MAX_VALUE)
                    .add(minDelPBox, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, 266, Short.MAX_VALUE)
                    .add(recombWeightsCombo, 0, 266, Short.MAX_VALUE))
                .addContainerGap())
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)
            .add(layout.createSequentialGroup()
                .addContainerGap()
                .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)
                    .add(jLabel1)
                    .add(targetChiSquaredBox, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)
                    .add(jLabel2)
                    .add(maxFunEvalsBox, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)
                    .add(jLabel3)
                    .add(stopParamTolBox, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)
                    .add(jLabel4)
                    .add(stopFunTolBox, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)
                    .add(jLabel5)
                    .add(popSizeBox, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)
                    .add(jLabel6)
                    .add(maxDelPBox, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)
                    .add(jLabel7)
                    .add(minDelPBox, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(org.jdesktop.layout.LayoutStyle.RELATED)
                .add(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.BASELINE)
                    .add(jLabel8)
                    .add(recombWeightsCombo, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE))
                .addContainerGap(org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
    }// </editor-fold>//GEN-END:initComponents

    private void stopFunTolBoxActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_stopFunTolBoxActionPerformed
// TODO add your handling code here:
    }//GEN-LAST:event_stopFunTolBoxActionPerformed
    
    
    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JLabel jLabel1;
    private javax.swing.JLabel jLabel2;
    private javax.swing.JLabel jLabel3;
    private javax.swing.JLabel jLabel4;
    private javax.swing.JLabel jLabel5;
    private javax.swing.JLabel jLabel6;
    private javax.swing.JLabel jLabel7;
    private javax.swing.JLabel jLabel8;
    private javax.swing.JTextField maxDelPBox;
    private javax.swing.JTextField maxFunEvalsBox;
    private javax.swing.JTextField minDelPBox;
    private javax.swing.JTextField popSizeBox;
    private javax.swing.JComboBox recombWeightsCombo;
    private javax.swing.JTextField stopFunTolBox;
    private javax.swing.JTextField stopParamTolBox;
    private javax.swing.JTextField targetChiSquaredBox;
    // End of variables declaration//GEN-END:variables
    
}
