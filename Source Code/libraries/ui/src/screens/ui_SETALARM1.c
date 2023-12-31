// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_SETALARM1_screen_init(void)
{
    ui_SETALARM1 = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_SETALARM1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_bgsettime1 = lv_img_create(ui_SETALARM1);
    lv_img_set_src(ui_bgsettime1, &ui_img_bggg_png);
    lv_obj_set_width(ui_bgsettime1, LV_SIZE_CONTENT);   /// 240
    lv_obj_set_height(ui_bgsettime1, LV_SIZE_CONTENT);    /// 320
    lv_obj_set_align(ui_bgsettime1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_bgsettime1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_bgsettime1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_titlesdt5 = lv_label_create(ui_SETALARM1);
    lv_obj_set_width(ui_titlesdt5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_titlesdt5, LV_SIZE_CONTENT);    /// -83
    lv_obj_set_x(ui_titlesdt5, -3);
    lv_obj_set_y(ui_titlesdt5, 14);
    lv_obj_set_align(ui_titlesdt5, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_titlesdt5, "SET ALARM");
    lv_obj_set_style_text_color(ui_titlesdt5, lv_color_hex(0x0CBCEE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_titlesdt5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ok4 = lv_btn_create(ui_SETALARM1);
    lv_obj_set_width(ui_ok4, 65);
    lv_obj_set_height(ui_ok4, 35);
    lv_obj_set_x(ui_ok4, 2);
    lv_obj_set_y(ui_ok4, 97);
    lv_obj_set_align(ui_ok4, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ok4, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ok4, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label15 = lv_label_create(ui_ok4);
    lv_obj_set_width(ui_Label15, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label15, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label15, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label15, "OK");

    ui_titlesdt6 = lv_label_create(ui_SETALARM1);
    lv_obj_set_width(ui_titlesdt6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_titlesdt6, LV_SIZE_CONTENT);    /// -83
    lv_obj_set_x(ui_titlesdt6, -55);
    lv_obj_set_y(ui_titlesdt6, 72);
    lv_obj_set_align(ui_titlesdt6, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_titlesdt6, "SET HOUR");
    lv_obj_set_style_text_color(ui_titlesdt6, lv_color_hex(0x0CBCEE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_titlesdt6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_titlesdt7 = lv_label_create(ui_SETALARM1);
    lv_obj_set_width(ui_titlesdt7, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_titlesdt7, LV_SIZE_CONTENT);    /// -83
    lv_obj_set_x(ui_titlesdt7, 55);
    lv_obj_set_y(ui_titlesdt7, 72);
    lv_obj_set_align(ui_titlesdt7, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_titlesdt7, "SET MINUTE");
    lv_obj_set_style_text_color(ui_titlesdt7, lv_color_hex(0x0CBCEE), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_titlesdt7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bgroller2 = lv_img_create(ui_SETALARM1);
    lv_img_set_src(ui_bgroller2, &ui_img_216451335);
    lv_obj_set_width(ui_bgroller2, LV_SIZE_CONTENT);   /// 52
    lv_obj_set_height(ui_bgroller2, LV_SIZE_CONTENT);    /// 102
    lv_obj_set_x(ui_bgroller2, -54);
    lv_obj_set_y(ui_bgroller2, -9);
    lv_obj_set_align(ui_bgroller2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_bgroller2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_bgroller2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Roller3 = lv_roller_create(ui_bgroller2);
    lv_roller_set_options(ui_Roller3,
                          "00\n01\n02\n03\n04\n05\n06\n07\n08\n09\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n23",
                          LV_ROLLER_MODE_NORMAL);
    lv_obj_set_height(ui_Roller3, 98);
    lv_obj_set_width(ui_Roller3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_Roller3, 0);
    lv_obj_set_y(ui_Roller3, -2);
    lv_obj_set_align(ui_Roller3, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_style_bg_color(ui_Roller3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Roller3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_bgroller3 = lv_img_create(ui_SETALARM1);
    lv_img_set_src(ui_bgroller3, &ui_img_216451335);
    lv_obj_set_width(ui_bgroller3, LV_SIZE_CONTENT);   /// 52
    lv_obj_set_height(ui_bgroller3, LV_SIZE_CONTENT);    /// 102
    lv_obj_set_x(ui_bgroller3, 54);
    lv_obj_set_y(ui_bgroller3, -9);
    lv_obj_set_align(ui_bgroller3, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_bgroller3, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_bgroller3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Roller4 = lv_roller_create(ui_bgroller3);
    lv_roller_set_options(ui_Roller4,
                          "00\n01\n02\n03\n04\n05\n06\n07\n08\n09\n10\n11\n12\n13\n14\n15\n16\n17\n18\n19\n20\n21\n22\n23\n24\n25\n26\n27\n28\n29\n30\n31\n32\n33\n34\n35\n36\n37\n38\n39\n40\n41\n42\n43\n44\n45\n46\n47\n48\n49\n50\n51\n52\n53\n54\n55\n56\n57\n58\n59",
                          LV_ROLLER_MODE_NORMAL);
    lv_obj_set_height(ui_Roller4, 98);
    lv_obj_set_width(ui_Roller4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_Roller4, 0);
    lv_obj_set_y(ui_Roller4, -2);
    lv_obj_set_align(ui_Roller4, LV_ALIGN_BOTTOM_MID);
    lv_obj_set_style_bg_color(ui_Roller4, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Roller4, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_ok4, ui_event_ok4, LV_EVENT_ALL, NULL);

}
