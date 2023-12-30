static const char norm_fg[] = "#cfc6b8";
static const char norm_bg[] = "#151c24";
static const char norm_border[] = "#908a80";

static const char sel_fg[] = "#cfc6b8";
static const char sel_bg[] = "#897862";
static const char sel_border[] = "#cfc6b8";

static const char urg_fg[] = "#cfc6b8";
static const char urg_bg[] = "#505A67";
static const char urg_border[] = "#505A67";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
