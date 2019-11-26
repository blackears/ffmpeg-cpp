#pragma once

#include "ffmpeg.h"

#include <stdexcept>
#include "std.h"

namespace ffmpegcpp
{
    class FFMPEGCPP_EXPORT FFmpegException : std::runtime_error
	{

	public:

		FFmpegException(std::string error);

		FFmpegException(std::string error, int returnValue);

        virtual char const* what() const noexcept override
		{
			return std::exception::what();
		}


	private:

		char error[AV_ERROR_MAX_STRING_SIZE];
	};
}
