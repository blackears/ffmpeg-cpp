#pragma once
#include "VideoCodec.h"
#include "ffmpeg-cpp_global.h"

namespace ffmpegcpp
{

    class FFMPEGCPP_EXPORT H265NVEncCodec : public VideoCodec
	{

	public:

		H265NVEncCodec();

		void SetPreset(const char* preset);
	};


}
