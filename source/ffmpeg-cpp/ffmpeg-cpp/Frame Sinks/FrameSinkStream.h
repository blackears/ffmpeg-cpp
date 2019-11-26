#pragma once

#include "ffmpeg.h"
#include "FrameWriter.h"
#include "Demuxing/StreamData.h"

namespace ffmpegcpp
{
    class FFMPEGCPP_EXPORT FrameSinkStream
	{
	public:

		FrameSinkStream(FrameWriter* frameSink, int streamIdx);

		void WriteFrame(AVFrame* frame, StreamData* metaData);

		void Close();

		bool IsPrimed();

	private:

		FrameWriter* frameSink;
		int streamIndex;
	};
}
