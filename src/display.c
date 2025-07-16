#include <lvgl.h>
#include <zmk/display.h>
#include <zmk/display/widgets/status.h>
#include "logo.h"

static sys_slist_t widgets = SYS_SLIST_STATIC_INIT(&widgets);

int zmk_display_init() {
    struct zmk_widget_status *status_widget = zmk_widget_status_create();
    zmk_widget_status_init(status_widget, lv_scr_act());
    sys_slist_append(&widgets, &status_widget->node);

    // Add logo
    lv_obj_t *logo = lv_img_create(lv_scr_act());
    lv_img_set_src(logo, &my_logo);
    lv_obj_align(logo, LV_ALIGN_TOP_LEFT, 0, 0);

    return 0;
}
