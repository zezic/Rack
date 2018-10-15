#pragma once
#include "ui.hpp"
#include <jansson.h>


namespace rack {


static const float SVG_DPI = 75.0;
static const float MM_PER_IN = 25.4;


/** Converts inch measurements to pixels */
inline float in2px(float in) {
	return in * SVG_DPI;
}

inline Vec in2px(Vec in) {
	return in.mult(SVG_DPI);
}

/** Converts millimeter measurements to pixels */
inline float mm2px(float mm) {
	return mm * (SVG_DPI / MM_PER_IN);
}

inline Vec mm2px(Vec mm) {
	return mm.mult(SVG_DPI / MM_PER_IN);
}


// A 1HPx3U module should be 15x380 pixels. Thus the width of a module should be a factor of 15.
static const float RACK_GRID_WIDTH = 15;
static const float RACK_GRID_HEIGHT = 380;
static const Vec RACK_GRID_SIZE = Vec(RACK_GRID_WIDTH, RACK_GRID_HEIGHT);
static const std::string PRESET_FILTERS = "VCV Rack module preset (.vcvm):vcvm";
static const std::string PATCH_FILTERS = "VCV Rack patch (.vcv):vcv";



/** Deprecated. Will be removed in v1 */
json_t *colorToJson(NVGcolor color);
/** Deprecated. Will be removed in v1 */
NVGcolor jsonToColor(json_t *colorJ);


} // namespace rack
