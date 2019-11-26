#pragma once

#include "ffmpeg.h"

namespace ffmpegcpp
{
    class FFMPEGCPP_EXPORT ConvertedAudioProcessor
	{
	public:

		virtual void WriteConvertedFrame(AVFrame* convertedFrame) = 0;
	};

}

