#pragma once

#include "FrameSink.h"

namespace ffmpegcpp
{
    class FFMPEGCPP_EXPORT VideoFrameSink : public FrameSink
	{
	public:

		virtual AVMediaType GetMediaType()
		{
			return AVMEDIA_TYPE_VIDEO;
		}

		virtual ~VideoFrameSink() {}
	};
}
