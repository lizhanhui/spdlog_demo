workspace(name = "spdlog_demo")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")

http_archive(
    name = "com_github_fmtlib_fmt",
    strip_prefix = "fmt-8.0.1",
    sha256 = "b06ca3130158c625848f3fb7418f235155a4d389b2abc3a6245fb01cb0eb1e01",
    urls = [
        "https://github.com/fmtlib/fmt/archive/refs/tags/8.0.1.tar.gz",
    ],
    build_file = "//bazel:fmtlib.BUILD",
)

http_archive(
    name = "spdlog",
    urls = [
        "https://github.com/gabime/spdlog/archive/refs/tags/v1.9.2.tar.gz",
    ],
    strip_prefix = "spdlog-1.9.2",
    build_file = "//bazel:spdlog.BUILD",
)