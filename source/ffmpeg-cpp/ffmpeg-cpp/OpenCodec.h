#pragma once

#include "ffmpeg.h"

namespace ffmpegcpp
{
    class FFMPEGCPP_EXPORT OpenCodec
	{
	public:

		OpenCodec(AVCodecContext* openCodecContext);
		~OpenCodec();

		AVCodecContext* GetContext();

	private:

		AVCodecContext* context;
	};


}
