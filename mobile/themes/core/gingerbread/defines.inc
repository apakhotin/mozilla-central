%filter substitution

%define color_background_active #525252
%define color_background_default #000
%define color_text_default #fff
%define color_divider_border #333333
%define color_button_border #5a5a5a
%define color_dialog_border #5a5a5a
%define color_background_dlgbuttons #9a9a9a
%define color_background_panel #d6d6d6
%define color_text_panel #000
%define color_background_header #292929
%define color_text_header #999999
%define color_background_scroller #9a9a9a
%define color_background_inverse #fff
%define color_text_inverse #000
%define color_text_button #000
%define color_text_disabled #808080
%define color_text_placeholder #808080
%define color_text_as_link #febc2b

%define color_background_highlight #febc2b
%define color_background_highlight_overlay rgba(254, 188, 43, 0.8)
%define color_text_highlight #000

%define color_subtext_default lightgray
%define color_subtext_inverse #414141

%define font_xlarge 5.08mozmm
%define font_xnormal 2.75mozmm
%define font_normal 2.54mozmm
%define font_snormal 2.33mozmm
%define font_small 1.91mozmm
%define font_xsmall 1.69mozmm
%define font_tiny 1.48mozmm
%define font_xtiny 1.27mozmm

%define touch_row 7.41mozmm
%define touch_button_xlarge 7.62mozmm
%define touch_button_large 6.77mozmm
%define touch_button_small 5.93mozmm
%define touch_button_minwidth 11.86mozmm
%define touch_action_minwidth 21.17mozmm
%define touch_normal 6.77mozmm

%define margin_context_popup 3.39mozmm
%define margin_large 2.54mozmm
%define margin_xxxnormal 1.69mozmm
%define margin_xnormal 1.06mozmm
%define margin_normal 0.85mozmm
%define margin_snormal 0.64mozmm
%define margin_small 0.42mozmm
%define margin_tiny 0.21mozmm
%define margin_xtiny 0.11mozmm

%define padding_xlarge 3.39mozmm
%define padding_large 2.54mozmm
%define padding_xxxnormal 1.69mozmm
%define padding_xxnormal 1.27mozmm
%define padding_xnormal 1.06mozmm
%define padding_normal 0.85mozmm
%define padding_snormal 0.64mozmm
%define padding_small 0.42mozmm
%define padding_xsmall 0.21mozmm
%define padding_tiny 0.11mozmm

%define border_width_xxlarge 0.64mozmm
%define border_width_xlarge 0.42mozmm
%define border_width_large 0.32mozmm
%define border_width_small 0.21mozmm
%define border_width_tiny 0.11mozmm

%define border_radius_normal 0.85mozmm
%define border_radius_small 0.64mozmm
%define border_radius_tiny 0.21mozmm

%define shadow_width_xlarge 1.06mozmm
%define shadow_width_large 0.64mozmm
%define shadow_width_small 0.21mozmm

%define textbox_height 5.08mozmm

%define dropmarker_padding 0.53mozmm

%define progressmeter_height 3.39mozmm

%define urlbar_edit_height 6.35mozmm
%define urlbar_edit_indent 0.85mozmm
%define urlbar_max_width   96mozmm

%define scroller_thickness 0.64mozmm
%define scroller_minimum 1.27mozmm

%define sidebar_width_minimum 8.47mozmm
%define sidebar_button_height 7.41mozmm
%define documenttab_margin_bottom 0.85mozmm

%define placelabel_padding 8.47mozmm
%define placeitem_padding 4.23mozmm

%define autocomplete_item_container_image_padding 0.53mozmm
%define autocomplete_item_container_position 0.21mozmm
%define autocomplete_item_container_size 2.75mozmm
%define autocomplete_item_container_padding 5.08mozmm

%define autocomplete_item_subtitle_margin 2.75mozmm
%define autocomplete_item_label_margin 3.18mozmm
%define autocomplete_item_tags_margin 3.39mozmm

%define autocompleteresult_padding 0.53mozmm

%define dialog_width 76.2mozmm

%define appmenu_portrait_height 21.17mozmm
%define appmenu_button_height  10.48mozmm

%define tablet_panel_controls  40mozmm
%define tablet_panel_minwidth  124mozmm

%ifdef MOZ_PLATFORM_MAEMO
%define orientation -moz-device-orientation
%elifdef ANDROID
%define orientation -moz-device-orientation
%else
%define orientation orientation
%endif
