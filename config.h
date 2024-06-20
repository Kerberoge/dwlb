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
static char *fontstr = "Open Sans SemiBold:size=9";
// tag names
static char *tags_names[] = { "1", "2", "3", "4" };

#define COLOR(hex) 	{	.red = (hex >> 24 & 0xFF) + 0x100 * (hex >> 24 & 0xFF), \
						.green = (hex >> 16 & 0xFF) + 0x100 * (hex >> 16 & 0xFF), \
						.blue = (hex >> 8 & 0xFF) + 0x100 * (hex >> 8 & 0xFF), \
						.alpha = (hex & 0xFF) + 0x100 * (hex & 0xFF)	}

#define FG		0xeeeeeeff
#define BG		0x1d293dff
#define AC		0x244a8aff
#define UR_FG	0xffffffff
#define UR_BG	0xff5050ff

static pixman_color_t active_fg_color =          COLOR(FG);
static pixman_color_t active_bg_color =          COLOR(AC);

static pixman_color_t occupied_fg_color =        COLOR(FG);
static pixman_color_t occupied_bg_color =        COLOR(BG);

static pixman_color_t inactive_fg_color =        COLOR(FG);
static pixman_color_t inactive_bg_color =        COLOR(BG);

static pixman_color_t urgent_fg_color =          COLOR(UR_FG);
static pixman_color_t urgent_bg_color =          COLOR(UR_BG);

static pixman_color_t middle_bg_color =          COLOR(BG);
static pixman_color_t middle_bg_color_selected = COLOR(AC);
