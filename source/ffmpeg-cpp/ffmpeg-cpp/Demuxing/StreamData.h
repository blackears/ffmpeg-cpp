#pragma once

#include "ffmpeg.h"

namespace ffmpegcpp
{
    struct FFMPEGCPP_EXPORT StreamData
	{
		AVMediaType type;

		AVRational timeBase;
		AVRational frameRate;
	};
}
