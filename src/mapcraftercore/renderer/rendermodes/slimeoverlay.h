/*
 * Copyright 2012-2015 Moritz Hilscher
 *
 * This file is part of Mapcrafter.
 *
 * Mapcrafter is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Mapcrafter is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Mapcrafter.  If not, see <http://www.gnu.org/licenses/>.
 */


#ifndef RENDERMODES_SLIMEOVERLAY_H_
#define RENDERMODES_SLIMEOVERLAY_H_

#include "overlay.h"

namespace mapcrafter {
namespace renderer {

class JavaRandom {
public:
	JavaRandom();
	~JavaRandom();

	void setSeed(long long seed);
	int next(int bits);
	int nextInt(int max);

protected:
	long long seed;
};

class SlimeOverlay : public OverlayRenderMode {
public:
	SlimeOverlay();
	virtual ~SlimeOverlay();

protected:
	virtual RGBAPixel getBlockColor(const mc::BlockPos& pos, uint16_t id, uint16_t data);
};

}
}

#endif /* RENDERMODES_SLIMEOVERLAY_H_ */
