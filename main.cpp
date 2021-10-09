#include <cstdlib>
#include <iostream>

#include "spdlog/cfg/env.h"
#include "spdlog/sinks/syslog_sink.h"

void syslog_example() {
  std::string ident = "spdlog-example";
  auto syslog_logger = spdlog::syslog_logger_mt("syslog", ident, LOG_PID);
  syslog_logger->warn("This is warning that will end up in syslog.");
}

int main(int argc, char *argv[]) {
  std::cout << "It works" << std::endl;

  spdlog::cfg::load_env_levels();

  syslog_example();

  return EXIT_SUCCESS;
}