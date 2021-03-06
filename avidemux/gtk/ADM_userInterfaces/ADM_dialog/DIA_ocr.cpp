/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#include "ADM_toolkitGtk.h"
GtkWidget*
DIA_ocr (void)
{
  GtkWidget *dialog1;
  GtkWidget *dialog_vbox1;
  GtkWidget *vbox1;
  GtkWidget *frame5;
  GtkWidget *table1;
  GtkWidget *labelNbGlyphs;
  GtkWidget *labelTime;
  GtkWidget *labelNbLines;
  GtkWidget *label9;
  GtkWidget *label15;
  GtkWidget *label8;
  GtkWidget *label7;
  GtkWidget *frameBitmap;
  GtkWidget *vbox7;
  GtkWidget *table2;
  GtkWidget *label13;
  GtkWidget *drawingareaSmall;
  GtkWidget *label14;
  GtkWidget *labelText;
  GtkWidget *entry;
  GtkWidget *hbuttonbox1;
  GtkWidget *buttonCalibrate;
  GtkWidget *buttonSkipAll;
  GtkWidget *buttonSkip;
  GtkWidget *buttonIgnore;
  GtkWidget *buttonOk;
  GtkWidget *drawingareaBitmap;
  GtkWidget *hseparator1;
  GtkWidget *label12;
  GtkWidget *dialog_action_area1;
  GtkWidget *closebutton1;

  dialog1 = gtk_dialog_new ();
  gtk_window_set_title (GTK_WINDOW (dialog1), QT_TR_NOOP("Mini OCR"));
  gtk_window_set_type_hint (GTK_WINDOW (dialog1), GDK_WINDOW_TYPE_HINT_DIALOG);

  dialog_vbox1 = gtk_dialog_get_content_area (GTK_DIALOG (dialog1));
  gtk_widget_show (dialog_vbox1);

  vbox1 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox1);
  gtk_box_pack_start (GTK_BOX (dialog_vbox1), vbox1, TRUE, TRUE, 0);

  frame5 = gtk_frame_new (NULL);
  gtk_widget_show (frame5);
  gtk_box_pack_start (GTK_BOX (vbox1), frame5, FALSE, FALSE, 0);

  table1 = gtk_table_new (3, 2, FALSE);
  gtk_widget_show (table1);
  gtk_container_add (GTK_CONTAINER (frame5), table1);

  labelNbGlyphs = gtk_label_new (QT_TR_NOOP("0"));
  gtk_widget_show (labelNbGlyphs);
  gtk_table_attach (GTK_TABLE (table1), labelNbGlyphs, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelNbGlyphs), 0, 0.5);

  labelTime = gtk_label_new (QT_TR_NOOP("0:0:0"));
  gtk_widget_show (labelTime);
  gtk_table_attach (GTK_TABLE (table1), labelTime, 1, 2, 2, 3,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelTime), 0, 0.5);

  labelNbLines = gtk_label_new (QT_TR_NOOP("0"));
  gtk_widget_show (labelNbLines);
  gtk_table_attach (GTK_TABLE (table1), labelNbLines, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelNbLines), 0, 0.5);

  label9 = gtk_label_new (QT_TR_NOOP("# of lines"));
  gtk_widget_show (label9);
  gtk_table_attach (GTK_TABLE (table1), label9, 0, 1, 1, 2,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label9), GTK_JUSTIFY_FILL);
  gtk_misc_set_alignment (GTK_MISC (label9), 0, 0.5);

  label15 = gtk_label_new (QT_TR_NOOP("TimeCode:"));
  gtk_widget_show (label15);
  gtk_table_attach (GTK_TABLE (table1), label15, 0, 1, 2, 3,
                    (GtkAttachOptions) (0),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label15), GTK_JUSTIFY_FILL);
  gtk_misc_set_alignment (GTK_MISC (label15), 0, 0.5);

  label8 = gtk_label_new (QT_TR_NOOP("# of Glyphs :"));
  gtk_widget_show (label8);
  gtk_table_attach (GTK_TABLE (table1), label8, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_label_set_justify (GTK_LABEL (label8), GTK_JUSTIFY_FILL);
  gtk_misc_set_alignment (GTK_MISC (label8), 0, 0.5);

  label7 = gtk_label_new (QT_TR_NOOP("<b>Stats</b>"));
  gtk_widget_show (label7);
  gtk_frame_set_label_widget (GTK_FRAME (frame5), label7);
  gtk_label_set_use_markup (GTK_LABEL (label7), TRUE);

  frameBitmap = gtk_frame_new (NULL);
  gtk_widget_show (frameBitmap);
  gtk_box_pack_start (GTK_BOX (vbox1), frameBitmap, FALSE, FALSE, 0);

  vbox7 = gtk_vbox_new (FALSE, 0);
  gtk_widget_show (vbox7);
  gtk_container_add (GTK_CONTAINER (frameBitmap), vbox7);

  table2 = gtk_table_new (2, 2, FALSE);
  gtk_widget_show (table2);
  gtk_box_pack_start (GTK_BOX (vbox7), table2, FALSE, FALSE, 0);

  label13 = gtk_label_new (QT_TR_NOOP("Current Glyph"));
  gtk_widget_show (label13);
  gtk_table_attach (GTK_TABLE (table2), label13, 0, 1, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label13), 0, 0.5);

  drawingareaSmall = gtk_drawing_area_new ();
  gtk_widget_show (drawingareaSmall);
  gtk_table_attach (GTK_TABLE (table2), drawingareaSmall, 0, 1, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (GTK_EXPAND | GTK_FILL), 0, 0);

  label14 = gtk_label_new (QT_TR_NOOP(" Text:"));
  gtk_widget_show (label14);
  gtk_table_attach (GTK_TABLE (table2), label14, 1, 2, 0, 1,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (label14), 0, 0.5);

  labelText = gtk_label_new (QT_TR_NOOP(" "));
  gtk_widget_show (labelText);
  gtk_table_attach (GTK_TABLE (table2), labelText, 1, 2, 1, 2,
                    (GtkAttachOptions) (GTK_FILL),
                    (GtkAttachOptions) (0), 0, 0);
  gtk_misc_set_alignment (GTK_MISC (labelText), 0, 0.5);

  entry = gtk_entry_new ();
  gtk_widget_show (entry);
  gtk_box_pack_start (GTK_BOX (vbox7), entry, FALSE, FALSE, 0);

  hbuttonbox1 = gtk_hbutton_box_new ();
  gtk_widget_show (hbuttonbox1);
  gtk_box_pack_start (GTK_BOX (vbox7), hbuttonbox1, FALSE, FALSE, 0);

  buttonCalibrate = gtk_button_new_with_mnemonic (QT_TR_NOOP("_Calibrate"));
  gtk_widget_show (buttonCalibrate);
  gtk_container_add (GTK_CONTAINER (hbuttonbox1), buttonCalibrate);
  gtk_widget_set_tooltip_text (buttonCalibrate, QT_TR_NOOP("If the glyphs are too thin, enter a lower value here"));

  buttonSkipAll = gtk_button_new_with_mnemonic (QT_TR_NOOP("S_kip all"));
  gtk_widget_show (buttonSkipAll);
  gtk_container_add (GTK_CONTAINER (hbuttonbox1), buttonSkipAll);
  gtk_widget_set_tooltip_text (buttonSkipAll, QT_TR_NOOP("Skip the whole image"));

  buttonSkip = gtk_button_new_with_mnemonic (QT_TR_NOOP("Skip Glyph"));
  gtk_widget_show (buttonSkip);
  gtk_container_add (GTK_CONTAINER (hbuttonbox1), buttonSkip);
  gtk_widget_set_tooltip_text (buttonSkip, QT_TR_NOOP("Skip the current letter/glyph"));

  buttonIgnore = gtk_button_new_with_mnemonic (QT_TR_NOOP("_Ignore glyph"));
  gtk_widget_show (buttonIgnore);
  gtk_container_add (GTK_CONTAINER (hbuttonbox1), buttonIgnore);
  gtk_widget_set_tooltip_text (buttonIgnore, QT_TR_NOOP("This glyph will be ignored from now on"));

  buttonOk = gtk_button_new_with_mnemonic (QT_TR_NOOP("Ok"));
  gtk_widget_show (buttonOk);
  gtk_container_add (GTK_CONTAINER (hbuttonbox1), buttonOk);

  drawingareaBitmap = gtk_drawing_area_new ();
  gtk_widget_show (drawingareaBitmap);
  gtk_box_pack_start (GTK_BOX (vbox7), drawingareaBitmap, TRUE, TRUE, 0);
  gtk_widget_set_size_request (drawingareaBitmap, 5, 11);

  hseparator1 = gtk_hseparator_new ();
  gtk_widget_show (hseparator1);
  gtk_box_pack_start (GTK_BOX (vbox7), hseparator1, TRUE, TRUE, 0);

  label12 = gtk_label_new (QT_TR_NOOP("<b>Bitmap</b>"));
  gtk_widget_show (label12);
  gtk_frame_set_label_widget (GTK_FRAME (frameBitmap), label12);
  gtk_label_set_use_markup (GTK_LABEL (label12), TRUE);

  dialog_action_area1 = gtk_dialog_get_action_area (GTK_DIALOG (dialog1));
  gtk_widget_show (dialog_action_area1);
  gtk_button_box_set_layout (GTK_BUTTON_BOX (dialog_action_area1), GTK_BUTTONBOX_END);

  closebutton1 = gtk_button_new_from_stock ("gtk-close");
  gtk_widget_show (closebutton1);
  gtk_dialog_add_action_widget (GTK_DIALOG (dialog1), closebutton1, GTK_RESPONSE_CLOSE);

  return dialog1;
}
