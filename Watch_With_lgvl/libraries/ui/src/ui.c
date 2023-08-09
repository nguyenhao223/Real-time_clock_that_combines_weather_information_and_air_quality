// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////

// SCREEN: ui_HOME
void ui_HOME_screen_init(void);
lv_obj_t * ui_HOME;
lv_obj_t * ui_background;
lv_obj_t * ui_time;
lv_obj_t * ui_hour;
lv_obj_t * ui_minute;
lv_obj_t * ui_dategroup1;
lv_obj_t * ui_nameday1;
lv_obj_t * ui_date2;
lv_obj_t * ui_month1;
lv_obj_t * ui_year1;
lv_obj_t * ui_halfsun;
lv_obj_t * ui_cloud;
lv_obj_t * ui_temperaturegroup1;
lv_obj_t * ui_temp1;
lv_obj_t * ui_C1;
lv_obj_t * ui_hum;
lv_obj_t * ui_rain;
lv_obj_t * ui_humm;
lv_obj_t * ui_AirQuality;
lv_obj_t * ui_air;
lv_obj_t * ui_ppm;
void ui_event_btnmenu(lv_event_t * e);
lv_obj_t * ui_btnmenu;
lv_obj_t * ui_btnmenu1;
lv_obj_t * ui_Label7;
lv_obj_t * ui_Label8;

// SCREEN: ui_MENU
void ui_MENU_screen_init(void);
lv_obj_t * ui_MENU;
lv_obj_t * ui_background1;
lv_obj_t * ui_Panel3;
lv_obj_t * ui_title;
void ui_event_Button_AnalogClock(lv_event_t * e);
lv_obj_t * ui_Button_AnalogClock;
lv_obj_t * ui_title_btn1;
void ui_event_Button_SetDayTime(lv_event_t * e);
lv_obj_t * ui_Button_SetDayTime;
lv_obj_t * ui_title_btn2;
void ui_event_Button_SetAlarm(lv_event_t * e);
lv_obj_t * ui_Button_SetAlarm;
lv_obj_t * ui_title_btn3;
void ui_event_Button_BacktoHome(lv_event_t * e);
lv_obj_t * ui_Button_BacktoHome;
lv_obj_t * ui_Label5;
lv_obj_t * ui_Image2;

// SCREEN: ui_ANALOGCLOCK
void ui_ANALOGCLOCK_screen_init(void);
lv_obj_t * ui_ANALOGCLOCK;
lv_obj_t * ui_bg_analog;
void ui_event_HOME1(lv_event_t * e);
lv_obj_t * ui_HOME1;
lv_obj_t * ui_HOME2;
void ui_event_BACK1(lv_event_t * e);
lv_obj_t * ui_BACK1;
lv_obj_t * ui_Image5;
lv_obj_t * ui_TimeAna;
lv_obj_t * ui_houranalog;
lv_obj_t * ui_dau2cham;
lv_obj_t * ui_minanalog;
lv_obj_t * ui_DayANA;
lv_obj_t * ui_namedateAna;
lv_obj_t * ui_dayana;
lv_obj_t * ui_namemonthana;
lv_obj_t * ui_ClockPannel;
lv_obj_t * ui_dot1;
lv_obj_t * ui_dot2;
lv_obj_t * ui_dot3;
lv_obj_t * ui_dot4;
lv_obj_t * ui_dot5;
lv_obj_t * ui_dot6;
lv_obj_t * ui_dot7;
lv_obj_t * ui_dot8;
lv_obj_t * ui_clocknumber1;
lv_obj_t * ui_clocknumber2;
lv_obj_t * ui_clocknumber3;
lv_obj_t * ui_clocknumber4;
lv_obj_t * ui_clockhour;
lv_obj_t * ui_clockmin;
lv_obj_t * ui_clocksec;
lv_obj_t * ui_clockcenter;

// SCREEN: ui_SETDAYTIME
void ui_SETDAYTIME_screen_init(void);
lv_obj_t * ui_SETDAYTIME;
lv_obj_t * ui_background3;
void ui_event_HOME3(lv_event_t * e);
lv_obj_t * ui_HOME3;
lv_obj_t * ui_HOME4;
void ui_event_BACK2(lv_event_t * e);
lv_obj_t * ui_BACK2;
lv_obj_t * ui_BACK3;
lv_obj_t * ui_Image3;

// SCREEN: ui_SETALARM
void ui_SETALARM_screen_init(void);
lv_obj_t * ui_SETALARM;
lv_obj_t * ui_BG;
void ui_event_HOME5(lv_event_t * e);
lv_obj_t * ui_HOME5;
lv_obj_t * ui_HOME6;
void ui_event_BACK4(lv_event_t * e);
lv_obj_t * ui_BACK4;
lv_obj_t * ui_BACK5;
lv_obj_t * ui____initial_actions0;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=0
    #error "LV_COLOR_16_SWAP should be 0 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////

///////////////////// FUNCTIONS ////////////////////
void ui_event_btnmenu(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_MENU, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Button_AnalogClock(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_ANALOGCLOCK, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Button_SetDayTime(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_SETDAYTIME, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Button_SetAlarm(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_SETALARM, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_Button_BacktoHome(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_HOME, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_HOME1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_HOME, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_BACK1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_MENU, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_HOME3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_HOME, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_BACK2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_MENU, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_HOME5(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_HOME, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}
void ui_event_BACK4(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_MENU, LV_SCR_LOAD_ANIM_FADE_ON, 500, 0);
    }
}

///////////////////// SCREENS ////////////////////

void ui_init(void)
{
    LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_HOME_screen_init();
    ui_MENU_screen_init();
    ui_ANALOGCLOCK_screen_init();
    ui_SETDAYTIME_screen_init();
    ui_SETALARM_screen_init();
    ui____initial_actions0 = lv_obj_create(NULL);
    lv_disp_load_scr(ui_HOME);
}