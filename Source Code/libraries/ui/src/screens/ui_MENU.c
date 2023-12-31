// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

void ui_MENU_screen_init(void)
{
    ui_MENU = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_MENU, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_background1 = lv_img_create(ui_MENU);
    lv_img_set_src(ui_background1, &ui_img_bggg_png);
    lv_obj_set_width(ui_background1, LV_SIZE_CONTENT);   /// 512
    lv_obj_set_height(ui_background1, LV_SIZE_CONTENT);    /// 320
    lv_obj_set_align(ui_background1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_background1, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_background1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Panel3 = lv_obj_create(ui_MENU);
    lv_obj_set_width(ui_Panel3, 167);
    lv_obj_set_height(ui_Panel3, 183);
    lv_obj_set_x(ui_Panel3, 38);
    lv_obj_set_y(ui_Panel3, 65);
    lv_obj_clear_flag(ui_Panel3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Panel3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_title = lv_label_create(ui_MENU);
    lv_obj_set_width(ui_title, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_title, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_title, -5);
    lv_obj_set_y(ui_title, -129);
    lv_obj_set_align(ui_title, LV_ALIGN_CENTER);
    lv_label_set_text(ui_title, "MENU");
    lv_obj_set_style_text_color(ui_title, lv_color_hex(0x14D8E7), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_title, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_title, &lv_font_montserrat_22, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button_AnalogClock = lv_btn_create(ui_MENU);
    lv_obj_set_width(ui_Button_AnalogClock, 132);
    lv_obj_set_height(ui_Button_AnalogClock, 33);
    lv_obj_set_x(ui_Button_AnalogClock, 56);
    lv_obj_set_y(ui_Button_AnalogClock, 82);
    lv_obj_add_flag(ui_Button_AnalogClock, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button_AnalogClock, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_title_btn1 = lv_label_create(ui_Button_AnalogClock);
    lv_obj_set_width(ui_title_btn1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_title_btn1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_title_btn1, -1);
    lv_obj_set_y(ui_title_btn1, 0);
    lv_obj_set_align(ui_title_btn1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_title_btn1, "ANALOG CLOCK");
    lv_obj_set_style_text_color(ui_title_btn1, lv_color_hex(0x180101), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_title_btn1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button_SetDayTime = lv_btn_create(ui_MENU);
    lv_obj_set_width(ui_Button_SetDayTime, 131);
    lv_obj_set_height(ui_Button_SetDayTime, 33);
    lv_obj_set_x(ui_Button_SetDayTime, 56);
    lv_obj_set_y(ui_Button_SetDayTime, 124);
    lv_obj_add_flag(ui_Button_SetDayTime, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button_SetDayTime, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_title_btn2 = lv_label_create(ui_Button_SetDayTime);
    lv_obj_set_width(ui_title_btn2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_title_btn2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_title_btn2, 0);
    lv_obj_set_y(ui_title_btn2, 1);
    lv_obj_set_align(ui_title_btn2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_title_btn2, "SET DAY TIME");
    lv_obj_set_style_text_color(ui_title_btn2, lv_color_hex(0x090000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_title_btn2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button_SetAlarm = lv_btn_create(ui_MENU);
    lv_obj_set_width(ui_Button_SetAlarm, 132);
    lv_obj_set_height(ui_Button_SetAlarm, 33);
    lv_obj_set_x(ui_Button_SetAlarm, 56);
    lv_obj_set_y(ui_Button_SetAlarm, 166);
    lv_obj_add_flag(ui_Button_SetAlarm, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button_SetAlarm, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_title_btn3 = lv_label_create(ui_Button_SetAlarm);
    lv_obj_set_width(ui_title_btn3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_title_btn3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_title_btn3, -1);
    lv_obj_set_y(ui_title_btn3, 1);
    lv_obj_set_align(ui_title_btn3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_title_btn3, "SET ALARM");
    lv_obj_set_style_text_color(ui_title_btn3, lv_color_hex(0x030000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_title_btn3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button_BacktoHome = lv_btn_create(ui_MENU);
    lv_obj_set_width(ui_Button_BacktoHome, 129);
    lv_obj_set_height(ui_Button_BacktoHome, 33);
    lv_obj_set_x(ui_Button_BacktoHome, 57);
    lv_obj_set_y(ui_Button_BacktoHome, 206);
    lv_obj_add_flag(ui_Button_BacktoHome, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button_BacktoHome, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Label5 = lv_label_create(ui_MENU);
    lv_obj_set_width(ui_Label5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Label5, 3);
    lv_obj_set_y(ui_Label5, 63);
    lv_obj_set_align(ui_Label5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label5, "");

    ui_Image2 = lv_img_create(ui_MENU);
    lv_img_set_src(ui_Image2, &ui_img_house_png);
    lv_obj_set_width(ui_Image2, LV_SIZE_CONTENT);   /// 24
    lv_obj_set_height(ui_Image2, LV_SIZE_CONTENT);    /// 22
    lv_obj_set_x(ui_Image2, 4);
    lv_obj_set_y(ui_Image2, 64);
    lv_obj_set_align(ui_Image2, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Image2, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_Image2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    lv_obj_add_event_cb(ui_Button_AnalogClock, ui_event_Button_AnalogClock, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button_SetDayTime, ui_event_Button_SetDayTime, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button_SetAlarm, ui_event_Button_SetAlarm, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button_BacktoHome, ui_event_Button_BacktoHome, LV_EVENT_ALL, NULL);

}
