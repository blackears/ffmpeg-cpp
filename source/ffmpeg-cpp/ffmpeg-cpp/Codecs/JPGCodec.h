#pragma once
#include "VideoCodec.h"
#include "ffmpeg-cpp_global.h"

namespace ffmpegcpp
{

    class FFMPEGCPP_EXPORT JPGCodec : public VideoCodec
	{

	public:

		JPGCodec();

		void SetCompressionLevel(int compressionLevel);
	};


}
