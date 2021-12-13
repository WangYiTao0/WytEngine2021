#pragma once

#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/fmt/ostr.h"

namespace WytEngine {
	class Log
	{
	public:
		static void Init();
		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }

	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;

	};
}
// Core log macros
#define WYT_CORE_TRACE(...)    ::WytEngine::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define WYT_CORE_INFO(...)     ::WytEngine::Log::GetCoreLogger()->info(__VA_ARGS__)
#define WYT_CORE_WARN(...)     ::WytEngine::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define WYT_CORE_ERROR(...)    ::WytEngine::Log::GetCoreLogger()->error(__VA_ARGS__)
#define WYT_CORE_FATAL(...)    ::WytEngine::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define WYT_TRACE(...)	      ::WytEngine::Log::GetClientLogger()->trace(__VA_ARGS__)
#define WYT_INFO(...)	      ::WytEngine::Log::GetClientLogger()->info(__VA_ARGS__)
#define WYT_WARN(...)	      ::WytEngine::Log::GetClientLogger()->warn(__VA_ARGS__)
#define WYT_ERROR(...)	      ::WytEngine::Log::GetClientLogger()->error(__VA_ARGS__)
#define WYT_FATAL(...)	      ::WytEngine::Log::GetClientLogger()->fatal(__VA_ARGS__)
