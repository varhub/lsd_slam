/**
* This file is part of LSD-SLAM.
*
* Copyright 2016 Victor Arribas <v.arribas.urjc@gmail.com> (Contribution)
* For more information see <http://vision.in.tum.de/lsdslam>
*
* LSD-SLAM is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* LSD-SLAM is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with LSD-SLAM. If not, see <http://www.gnu.org/licenses/>.
*/

#include "IOWrapper/ImageDisplay.h"

namespace lsd_slam {
namespace Util {

void displayThreadLoop(){}
void makeDisplayThread(){}

void displayImage(const char* /*windowName*/, const cv::Mat& /*image*/, bool /*autoSize*/){}

int waitKey(int /*milliseconds*/){ return -1; }
int waitKeyNoConsume(int /*milliseconds*/){ return -1; }

void closeAllWindows(){}

}}//NS
