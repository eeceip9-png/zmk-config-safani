#include <lvgl.h>
#include <zmk/display.h>

void zmk_display_status_screen_draw(lv_obj_t *screen) {
    lv_obj_clean(screen);

    // Logo (contoh teks dulu)
    lv_obj_t *label = lv_label_create(screen);
    lv_label_set_text(label, "SAFANI");
    lv_obj_align(label, LV_ALIGN_TOP_MID, 0, 0);

    // Layer
    lv_obj_t *layer = lv_label_create(screen);
    lv_label_set_text(layer, "Layer: ?");
    lv_obj_align(layer, LV_ALIGN_CENTER, 0, 0);

    // Battery
    lv_obj_t *bat = lv_label_create(screen);
    lv_label_set_text(bat, "BAT: ??%");
    lv_obj_align(bat, LV_ALIGN_BOTTOM_MID, 0, 0);
}
