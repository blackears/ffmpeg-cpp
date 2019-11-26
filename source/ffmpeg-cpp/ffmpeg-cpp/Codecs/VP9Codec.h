#pragma once
#include "VideoCodec.h"

namespace ffmpegcpp
{

    class FFMPEGCPP_EXPORT VP9Codec : public VideoCodec
	{

	public:

		VP9Codec();

		void SetDeadline(const char* deadline);
		void SetCpuUsed(int cpuUsed);

		void SetLossless(bool lossless);
		void SetCrf(int crf);
	};


}
