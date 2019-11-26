#pragma once

#include "ffmpeg.h"

namespace ffmpegcpp
{
    struct FFMPEGCPP_EXPORT AudioStreamInfo
	{
		int id;
		AVRational timeBase;
		const AVCodec* codec;
		float bitRate;

		int sampleRate;
		int channels;

		uint64_t channelLayout;
		char channelLayoutName[255];

	};
}
