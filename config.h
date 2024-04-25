// use ipc functionality
static bool ipc = true;
// initially hide all bars
static bool hidden = false;
// initially draw all bars at the bottom
static bool bottom = false;
// hide vacant tags
static bool hide_vacant = false;
// vertical pixel padding above and below text
static uint32_t vertical_padding = 1;
// allow in-line color commands in status text
static bool status_commands = true;
// center title text
static bool center_title = false;
// use title space as status text element
static bool custom_title = false;
// scale
static uint32_t buffer_scale = 1;
// font
static char *fontstr = "DejaVu Sans Mono:size=10.5";
// tag names
static char *tags_names[] = { "1", "2", "3", "4" };

#define COLOR(hex) 	{	.red = (hex >> 24 & 0xFF) + 0x100 * (hex >> 24 & 0xFF), \
						.green = (hex >> 16 & 0xFF) + 0x100 * (hex >> 16 & 0xFF), \
						.blue = (hex >> 8 & 0xFF) + 0x100 * (hex >> 8 & 0xFF), \
						.alpha = (hex & 0xFF) + 0x100 * (hex & 0xFF)	}

static pixman_color_t active_fg_color = COLOR(0xdfdfdfff);
static pixman_color_t active_bg_color = COLOR(0x3d3a54ff);
static pixman_color_t occupied_fg_color = COLOR(0xdfdfdfff);
static pixman_color_t occupied_bg_color = COLOR(0x222033ff);
static pixman_color_t inactive_fg_color = COLOR(0xdfdfdfff);
static pixman_color_t inactive_bg_color = COLOR(0x222033ff);
static pixman_color_t urgent_fg_color = COLOR(0xffffffff);
static pixman_color_t urgent_bg_color = COLOR(0xff5050ff);
static pixman_color_t middle_bg_color = COLOR(0x222033ff);
static pixman_color_t middle_bg_color_selected = COLOR(0x3d3a54ff);
