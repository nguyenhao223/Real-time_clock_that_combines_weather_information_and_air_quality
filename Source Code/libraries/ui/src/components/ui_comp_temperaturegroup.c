// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: SquareLine_Project

#include "../ui.h"

// COMPONENT temperaturegroup

lv_obj_t * ui_temperaturegroup_create(lv_obj_t * comp_parent)
{

    lv_obj_t * cui_temperaturegroup;
    cui_temperaturegroup = lv_obj_create(comp_parent);
    lv_obj_set_width(cui_temperaturegroup, 100);
    lv_obj_set_height(cui_temperaturegroup, 50);
    lv_obj_set_x(cui_temperaturegroup, -67);
    lv_obj_set_y(cui_temperaturegroup, 40);
    lv_obj_set_align(cui_temperaturegroup, LV_ALIGN_CENTER);
    lv_obj_clear_flag(cui_temperaturegroup, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(cui_temperaturegroup, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(cui_temperaturegroup, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(cui_temperaturegroup, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(cui_temperaturegroup, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_temp;
    cui_temp = lv_label_create(cui_temperaturegroup);
    lv_obj_set_width(cui_temp, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_temp, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_temp, -23);
    lv_obj_set_y(cui_temp, -2);
    lv_obj_set_align(cui_temp, LV_ALIGN_CENTER);
    lv_label_set_text(cui_temp, "25");
    lv_label_set_recolor(cui_temp, "true");
    lv_obj_set_style_text_color(cui_temp, lv_color_hex(0xFA0606), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_temp, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_temp, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * cui_C;
    cui_C = lv_label_create(cui_temperaturegroup);
    lv_obj_set_width(cui_C, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(cui_C, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(cui_C, 15);
    lv_obj_set_y(cui_C, -2);
    lv_obj_set_align(cui_C, LV_ALIGN_CENTER);
    lv_label_set_text(cui_C, "°C");
    lv_obj_set_style_text_color(cui_C, lv_color_hex(0xFE0000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(cui_C, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(cui_C, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t ** children = lv_mem_alloc(sizeof(lv_obj_t *) * _UI_COMP_TEMPERATUREGROUP_NUM);
    children[UI_COMP_TEMPERATUREGROUP_TEMPERATUREGROUP] = cui_temperaturegroup;
    children[UI_COMP_TEMPERATUREGROUP_TEMP] = cui_temp;
    children[UI_COMP_TEMPERATUREGROUP_C] = cui_C;
    lv_obj_add_event_cb(cui_temperaturegroup, get_component_child_event_cb, LV_EVENT_GET_COMP_CHILD, children);
    lv_obj_add_event_cb(cui_temperaturegroup, del_component_child_event_cb, LV_EVENT_DELETE, children);
    ui_comp_temperaturegroup_create_hook(cui_temperaturegroup);
    return cui_temperaturegroup;
}

