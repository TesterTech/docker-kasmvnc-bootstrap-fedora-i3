const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#151c24", /* black   */
  [1] = "#505A67", /* red     */
  [2] = "#897862", /* green   */
  [3] = "#A48F6F", /* yellow  */
  [4] = "#BBA37A", /* blue    */
  [5] = "#C3A87D", /* magenta */
  [6] = "#677983", /* cyan    */
  [7] = "#cfc6b8", /* white   */

  /* 8 bright colors */
  [8]  = "#908a80",  /* black   */
  [9]  = "#505A67",  /* red     */
  [10] = "#897862", /* green   */
  [11] = "#A48F6F", /* yellow  */
  [12] = "#BBA37A", /* blue    */
  [13] = "#C3A87D", /* magenta */
  [14] = "#677983", /* cyan    */
  [15] = "#cfc6b8", /* white   */

  /* special colors */
  [256] = "#151c24", /* background */
  [257] = "#cfc6b8", /* foreground */
  [258] = "#cfc6b8",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
