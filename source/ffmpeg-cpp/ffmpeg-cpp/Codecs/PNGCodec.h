#pragma once
#include "VideoCodec.h"
#include "ffmpeg-cpp_global.h"

namespace ffmpegcpp
{

    class FFMPEGCPP_EXPORT PNGCodec : public VideoCodec
	{

	public:

		PNGCodec();

		void SetCompressionLevel(int compressionLevel);
	};


}
