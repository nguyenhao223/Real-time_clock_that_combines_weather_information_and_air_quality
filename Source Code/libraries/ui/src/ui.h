// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "components/ui_comp.h"
#include "components/ui_comp_hook.h"
#include "ui_events.h"
// SCREEN: ui_HOME
void ui_HOME_screen_init(void);
extern lv_obj_t * ui_HOME;
extern lv_obj_t * ui_background;
extern lv_obj_t * ui_time;
extern lv_obj_t * ui_hour;
extern lv_obj_t * ui_minute;
extern lv_obj_t * ui_dategroup1;
extern lv_obj_t * ui_nameday1;
extern lv_obj_t * ui_date2;
extern lv_obj_t * ui_month1;
extern lv_obj_t * ui_year1;
extern lv_obj_t * ui_halfsun;
extern lv_obj_t * ui_cloud;
extern lv_obj_t * ui_temperaturegroup1;
extern lv_obj_t * ui_temp1;
extern lv_obj_t * ui_C1;
extern lv_obj_t * ui_hum;
extern lv_obj_t * ui_rain;
extern lv_obj_t * ui_humm;
extern lv_obj_t * ui_AirQuality;
extern lv_obj_t * ui_air;
extern lv_obj_t * ui_ppm;
void ui_event_btnmenu(lv_event_t * e);
extern lv_obj_t * ui_btnmenu;
extern lv_obj_t * ui_btnmenu1;
extern lv_obj_t * ui_Label7;
extern lv_obj_t * ui_Label8;
// SCREEN: ui_MENU
void ui_MENU_screen_init(void);
extern lv_obj_t * ui_MENU;
extern lv_obj_t * ui_background1;
extern lv_obj_t * ui_Panel3;
extern lv_obj_t * ui_title;
void ui_event_Button_AnalogClock(lv_event_t * e);
extern lv_obj_t * ui_Button_AnalogClock;
extern lv_obj_t * ui_title_btn1;
void ui_event_Button_SetDayTime(lv_event_t * e);
extern lv_obj_t * ui_Button_SetDayTime;
extern lv_obj_t * ui_title_btn2;
void ui_event_Button_SetAlarm(lv_event_t * e);
extern lv_obj_t * ui_Button_SetAlarm;
extern lv_obj_t * ui_title_btn3;
void ui_event_Button_BacktoHome(lv_event_t * e);
extern lv_obj_t * ui_Button_BacktoHome;
extern lv_obj_t * ui_Label5;
extern lv_obj_t * ui_Image2;
// SCREEN: ui_ANALOGCLOCK
void ui_ANALOGCLOCK_screen_init(void);
extern lv_obj_t * ui_ANALOGCLOCK;
extern lv_obj_t * ui_bg_analog;
void ui_event_HOME1(lv_event_t * e);
extern lv_obj_t * ui_HOME1;
extern lv_obj_t * ui_HOME2;
void ui_event_BACK1(lv_event_t * e);
extern lv_obj_t * ui_BACK1;
extern lv_obj_t * ui_Image5;
extern lv_obj_t * ui_TimeAna;
extern lv_obj_t * ui_houranalog;
extern lv_obj_t * ui_dau2cham;
extern lv_obj_t * ui_minanalog;
extern lv_obj_t * ui_DayANA;
extern lv_obj_t * ui_namedateAna;
extern lv_obj_t * ui_dayana;
extern lv_obj_t * ui_namemonthana;
extern lv_obj_t * ui_ClockPannel;
extern lv_obj_t * ui_dot1;
extern lv_obj_t * ui_dot2;
extern lv_obj_t * ui_dot3;
extern lv_obj_t * ui_dot4;
extern lv_obj_t * ui_dot5;
extern lv_obj_t * ui_dot6;
extern lv_obj_t * ui_dot7;
extern lv_obj_t * ui_dot8;
extern lv_obj_t * ui_clocknumber1;
extern lv_obj_t * ui_clocknumber2;
extern lv_obj_t * ui_clocknumber3;
extern lv_obj_t * ui_clocknumber4;
extern lv_obj_t * ui_clockhour;
extern lv_obj_t * ui_clockmin;
extern lv_obj_t * ui_clocksec;
extern lv_obj_t * ui_clockcenter;
// SCREEN: ui_SETDAYTIME
void ui_SETDAYTIME_screen_init(void);
extern lv_obj_t * ui_SETDAYTIME;
extern lv_obj_t * ui_background3;
void ui_event_HOME3(lv_event_t * e);
extern lv_obj_t * ui_HOME3;
extern lv_obj_t * ui_HOME4;
extern lv_obj_t * ui_TimeAna1;
extern lv_obj_t * ui_houranalog1;
extern lv_obj_t * ui_dau2cham1;
extern lv_obj_t * ui_minanalog1;
extern lv_obj_t * ui_DayANA1;
extern lv_obj_t * ui_namedateAna1;
extern lv_obj_t * ui_dayana1;
extern lv_obj_t * ui_namemonthana1;
void ui_event_BACK2(lv_event_t * e);
extern lv_obj_t * ui_BACK2;
extern lv_obj_t * ui_BACK3;
extern lv_obj_t * ui_titlesdt;
void ui_event_Button1(lv_event_t * e);
extern lv_obj_t * ui_Button1;
void ui_event_Button2(lv_event_t * e);
extern lv_obj_t * ui_Button2;
void ui_event_Button3(lv_event_t * e);
extern lv_obj_t * ui_Button3;
extern lv_obj_t * ui_Label6;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_Label9;
// SCREEN: ui_SETALARM
void ui_SETALARM_screen_init(void);
extern lv_obj_t * ui_SETALARM;
extern lv_obj_t * ui_BG;
void ui_event_HOME5(lv_event_t * e);
extern lv_obj_t * ui_HOME5;
extern lv_obj_t * ui_HOME6;
void ui_event_BACK4(lv_event_t * e);
extern lv_obj_t * ui_BACK4;
extern lv_obj_t * ui_BACK5;
extern lv_obj_t * ui_Label2;
extern lv_obj_t * ui_alarm1;
extern lv_obj_t * ui_TimeAna2;
extern lv_obj_t * ui_houranalog2;
extern lv_obj_t * ui_dau2cham2;
extern lv_obj_t * ui_minanalog2;
extern lv_obj_t * ui_Switch1;
extern lv_obj_t * ui_Label11;
extern lv_obj_t * ui_alarm2;
extern lv_obj_t * ui_TimeAna3;
extern lv_obj_t * ui_houranalog3;
extern lv_obj_t * ui_dau2cham3;
extern lv_obj_t * ui_minanalog3;
extern lv_obj_t * ui_Switch2;
extern lv_obj_t * ui_Label10;
void ui_event_ok2(lv_event_t * e);
extern lv_obj_t * ui_ok2;
extern lv_obj_t * ui_Label13;
extern lv_obj_t * ui_alarm3;
extern lv_obj_t * ui_TimeAna4;
extern lv_obj_t * ui_houranalog4;
extern lv_obj_t * ui_dau2cham4;
extern lv_obj_t * ui_minanalog4;
extern lv_obj_t * ui_Switch3;
extern lv_obj_t * ui_Label12;
void ui_event_ok3(lv_event_t * e);
extern lv_obj_t * ui_ok3;
extern lv_obj_t * ui_Label14;
// SCREEN: ui_SETTIME
void ui_SETTIME_screen_init(void);
extern lv_obj_t * ui_SETTIME;
extern lv_obj_t * ui_bgsettime;
extern lv_obj_t * ui_titlesdt1;
void ui_event_ok(lv_event_t * e);
extern lv_obj_t * ui_ok;
extern lv_obj_t * ui_Label3;
extern lv_obj_t * ui_titlesdt2;
extern lv_obj_t * ui_titlesdt3;
extern lv_obj_t * ui_bgroller;
extern lv_obj_t * ui_Roller2;
extern lv_obj_t * ui_bgroller1;
extern lv_obj_t * ui_Roller1;
// SCREEN: ui_SET_DATE
void ui_SET_DATE_screen_init(void);
extern lv_obj_t * ui_SET_DATE;
extern lv_obj_t * ui_bgsetdate;
extern lv_obj_t * ui_titlesdt4;
extern lv_obj_t * ui_Calendar2;
void ui_event_ok1(lv_event_t * e);
extern lv_obj_t * ui_ok1;
extern lv_obj_t * ui_Label1;
// SCREEN: ui_SETALARM1
void ui_SETALARM1_screen_init(void);
extern lv_obj_t * ui_SETALARM1;
extern lv_obj_t * ui_bgsettime1;
extern lv_obj_t * ui_titlesdt5;
void ui_event_ok4(lv_event_t * e);
extern lv_obj_t * ui_ok4;
extern lv_obj_t * ui_Label15;
extern lv_obj_t * ui_titlesdt6;
extern lv_obj_t * ui_titlesdt7;
extern lv_obj_t * ui_bgroller2;
extern lv_obj_t * ui_Roller3;
extern lv_obj_t * ui_bgroller3;
extern lv_obj_t * ui_Roller4;
extern lv_obj_t * ui____initial_actions0;

LV_IMG_DECLARE(ui_img_bggg_png);    // assets\bggg.png
LV_IMG_DECLARE(ui_img_sun_png);    // assets\sun.png
LV_IMG_DECLARE(ui_img_clouds_png);    // assets\clouds.png
LV_IMG_DECLARE(ui_img_rain_png);    // assets\rain.png
LV_IMG_DECLARE(ui_img_house_png);    // assets\house.png
LV_IMG_DECLARE(ui_img_backblack_png);    // assets\backblack.png
LV_IMG_DECLARE(ui_img_clock_hour_png);    // assets\clock_hour.png
LV_IMG_DECLARE(ui_img_clock_min_png);    // assets\clock_min.png
LV_IMG_DECLARE(ui_img_clock_sec_png);    // assets\clock_sec.png
LV_IMG_DECLARE(ui_img_backk_png);    // assets\backk.png
LV_IMG_DECLARE(ui_img_216451335);    // assets\roller_bg (2).png

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
