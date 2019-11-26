#pragma once

#include "ffmpeg.h"
#include "VideoStreamInfo.h"
#include "AudioStreamInfo.h"
#include "std.h"

namespace ffmpegcpp
{
    struct FFMPEGCPP_EXPORT ContainerInfo
	{
		long durationInMicroSeconds;
		float durationInSeconds;
		float start;
		float bitRate;
		const AVInputFormat* format;

		std::vector<VideoStreamInfo> videoStreams;
		std::vector<AudioStreamInfo> audioStreams;
	};


}
