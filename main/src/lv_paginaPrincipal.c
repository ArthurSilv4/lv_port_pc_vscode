#include "lv_paginaPrincipal.h"
#include "lvgl/lvgl.h"

void create_header(lv_obj_t *parent)
{
    lv_obj_t *header = lv_obj_create(parent);
    lv_obj_set_width(header, lv_pct(100));
    lv_obj_set_height(header, 70);
    lv_obj_set_style_radius(header, 0, 0);

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
    lv_obj_set_style_bg_color(bg, lv_color_hex(0xD3D3D3), 0);
    lv_obj_set_style_bg_grad_color(bg, lv_color_hex(0xA9A9A9), 0);
    lv_obj_set_style_bg_grad_dir(bg, LV_GRAD_DIR_HOR, 0);
    lv_obj_set_style_radius(bg, 0, 0);
    lv_obj_set_style_border_width(bg, 0, 0);

    create_header(scr);

    lv_obj_t *label = lv_label_create(scr);
    lv_label_set_text(label, "Titulo Bem Grande");
    lv_obj_set_style_text_font(label, &lv_font_montserrat_46, 0);
    lv_obj_align(label, LV_ALIGN_CENTER, 0, -60);

    lv_obj_t *paragraph = lv_label_create(scr);
    lv_label_set_text(paragraph, "loren ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultrices diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.");
    lv_label_set_long_mode(paragraph, LV_LABEL_LONG_WRAP);
    lv_obj_set_width(paragraph, lv_pct(90));
    lv_obj_align(paragraph, LV_ALIGN_CENTER, 0, 0);

    lv_obj_t *btn = lv_btn_create(scr);
    lv_obj_align(btn, LV_ALIGN_CENTER, 0, 60);
    lv_obj_set_style_bg_color(btn, lv_color_black(), 0);

    lv_obj_t *btn_label = lv_label_create(btn);
    lv_label_set_text(btn_label, "Proxima Pagina");

    lv_obj_t *icon4 = lv_label_create(btn);
    lv_label_set_text(icon4, LV_SYMBOL_RIGHT);
    lv_obj_set_style_text_color(icon4, lv_color_white(), 0);
    lv_obj_align(icon4, LV_ALIGN_RIGHT_MID, 15, 0);
}