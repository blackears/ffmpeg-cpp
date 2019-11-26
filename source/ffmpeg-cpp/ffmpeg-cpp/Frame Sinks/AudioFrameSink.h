#pragma once

#include "FrameSink.h"

namespace ffmpegcpp
{
    class FFMPEGCPP_EXPORT AudioFrameSink : public FrameSink
	{
	public:

		virtual AVMediaType GetMediaType()
		{
			return AVMEDIA_TYPE_AUDIO;
		}

		virtual ~AudioFrameSink() {}
	};
}
