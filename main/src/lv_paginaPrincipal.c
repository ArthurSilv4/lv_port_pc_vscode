#include "lv_paginaPrincipal.h"
#include "lvgl/lvgl.h"

void create_header(lv_obj_t *parent)
{
    lv_obj_t *header = lv_obj_create(parent);
    lv_obj_set_width(header, lv_pct(100));
    lv_obj_set_height(header, 70);
    lv_obj_set_style_radius(header, 0, 0);
    lv_obj_clear_flag(header, LV_OBJ_FLAG_SCROLLABLE);
    lv_obj_set_style_pad_all(header, 0, 0);
    lv_obj_set_style_margin_all(header, 0, 0);

    lv_obj_t *title = lv_label_create(header);
    lv_label_set_text(title, "EMPRESA FICTICIA");
    lv_obj_set_style_text_font(title, &lv_font_montserrat_36, 0);
    lv_obj_align(title, LV_ALIGN_LEFT_MID, 10, 0);
}

void create_initial_page(void)
{
    lv_obj_t *scr = lv_obj_create(NULL);
    lv_scr_load(scr);
    lv_obj_t *bg = lv_obj_create(scr);
    lv_obj_set_size(bg, lv_pct(100), lv_pct(100));

    lv_obj_set_style_bg_color(bg, lv_color_hex(0xF5F5F5), 0);
    lv_obj_set_style_bg_grad_color(bg, lv_color_hex(0xE0E0E0), 0);
    lv_obj_set_style_bg_grad_dir(bg, LV_GRAD_DIR_HOR, 0);
    lv_obj_set_style_radius(bg, 0, 0);
    lv_obj_set_style_border_width(bg, 0, 0);
    lv_obj_set_style_pad_all(bg, 0, 0);
    lv_obj_set_style_margin_all(bg, 0, 0);

    create_header(scr);

    lv_obj_t *label = lv_label_create(scr);
    lv_label_set_text(label, "LVGL NA CRIACAO DE INTERFACES");
    lv_obj_set_style_text_font(label, &lv_font_montserrat_36, 0);
    lv_obj_align(label, LV_ALIGN_TOP_MID, 0, 90);

    lv_obj_t *paragraph = lv_label_create(scr);
    lv_label_set_text(paragraph, "Aqui estao alguns componentes simples criados com LVGL, demonstrando sua versatilidade e facilidade no desenvolvimento de interfaces graficas.");
    lv_label_set_long_mode(paragraph, LV_LABEL_LONG_WRAP);
    lv_obj_set_width(paragraph, lv_pct(90));
    lv_obj_align(paragraph, LV_ALIGN_CENTER, 0, -150);

    lv_obj_t *btn = lv_btn_create(scr);
    lv_obj_align(btn, LV_ALIGN_CENTER, 0, -90);
    lv_obj_set_style_bg_color(btn, lv_color_black(), 0);

    lv_obj_t *btn_label = lv_label_create(btn);
    lv_label_set_text(btn_label, "Proxima Pagina");

    lv_obj_t *icon4 = lv_label_create(btn);
    lv_label_set_text(icon4, LV_SYMBOL_RIGHT);
    lv_obj_set_style_text_color(icon4, lv_color_white(), 0);
    lv_obj_align(icon4, LV_ALIGN_RIGHT_MID, 15, 0);

    lv_obj_t *chart1 = lv_chart_create(scr);
    lv_obj_set_size(chart1, lv_pct(45), 150);
    lv_obj_align(chart1, LV_ALIGN_BOTTOM_LEFT, 10, -250);
    lv_chart_set_type(chart1, LV_CHART_TYPE_LINE);
    lv_chart_set_point_count(chart1, 10);
    lv_chart_series_t *ser1 = lv_chart_add_series(chart1, lv_color_hex(0xFF0000), LV_CHART_AXIS_PRIMARY_Y);
    lv_chart_set_next_value(chart1, ser1, 10);
    lv_chart_set_next_value(chart1, ser1, 20);
    lv_chart_set_next_value(chart1, ser1, 30);
    lv_chart_set_next_value(chart1, ser1, 40);
    lv_chart_set_next_value(chart1, ser1, 50);
    lv_chart_set_next_value(chart1, ser1, 60);
    lv_chart_set_next_value(chart1, ser1, 70);
    lv_chart_set_next_value(chart1, ser1, 80);
    lv_chart_set_next_value(chart1, ser1, 90);
    lv_chart_set_next_value(chart1, ser1, 100);

    lv_obj_t *chart1_label = lv_label_create(chart1);
    lv_label_set_text(chart1_label, "Dados do Grafico 1");
    lv_obj_align(chart1_label, LV_ALIGN_OUT_TOP_MID, 0, -10);

    lv_obj_t *chart2 = lv_chart_create(scr);
    lv_obj_set_size(chart2, lv_pct(45), 150);
    lv_obj_align(chart2, LV_ALIGN_BOTTOM_RIGHT, -10, -250);
    lv_chart_set_type(chart2, LV_CHART_TYPE_BAR);
    lv_chart_set_point_count(chart2, 10);
    lv_chart_series_t *ser2 = lv_chart_add_series(chart2, lv_color_hex(0x0000FF), LV_CHART_AXIS_PRIMARY_Y);
    lv_chart_set_next_value(chart2, ser2, 15);
    lv_chart_set_next_value(chart2, ser2, 25);
    lv_chart_set_next_value(chart2, ser2, 35);
    lv_chart_set_next_value(chart2, ser2, 45);
    lv_chart_set_next_value(chart2, ser2, 55);
    lv_chart_set_next_value(chart2, ser2, 65);
    lv_chart_set_next_value(chart2, ser2, 75);
    lv_chart_set_next_value(chart2, ser2, 85);
    lv_chart_set_next_value(chart2, ser2, 95);
    lv_chart_set_next_value(chart2, ser2, 105);

    lv_obj_t *chart2_label = lv_label_create(chart2);
    lv_label_set_text(chart2_label, "Dados do Grafico 2");
    lv_obj_align(chart2_label, LV_ALIGN_OUT_TOP_MID, 0, -10);

    lv_obj_t *slider = lv_slider_create(scr);
    lv_obj_set_width(slider, lv_pct(20));
    lv_obj_align(slider, LV_ALIGN_BOTTOM_LEFT, 10, -100);
    lv_slider_set_range(slider, 0, 100);
    lv_slider_set_value(slider, 40, LV_ANIM_OFF);

    lv_obj_t *slider_label = lv_label_create(slider);
    lv_label_set_text_fmt(slider_label, "Slider: %d", 40);
    lv_obj_align_to(slider_label, slider, LV_ALIGN_OUT_RIGHT_MID, 10, 0);

    lv_obj_t *calendar = lv_calendar_create(scr);
    lv_obj_set_size(calendar, 200, 200);
    lv_obj_align(calendar, LV_ALIGN_BOTTOM_MID, -50, -10);

    const lv_calendar_date_t *today;
    lv_calendar_date_t highlighted_days[1];
    today = lv_calendar_get_today_date(calendar);
    highlighted_days[0] = *today;
    lv_calendar_set_highlighted_dates(calendar, highlighted_days, 1);

    lv_obj_t *kb = lv_keyboard_create(scr);
    lv_obj_set_size(kb, 300, 150);
    lv_obj_align(kb, LV_ALIGN_BOTTOM_RIGHT, -10, -50);
}