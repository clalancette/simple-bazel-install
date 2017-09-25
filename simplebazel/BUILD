load("@simplebazelinstall//tools:install.bzl", "install")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "hello-lib",
    srcs = [
        "hello-lib.cc",
    ],
    hdrs = [
        "hello-lib.hh",
    ],
)

cc_binary(
    name = "hello-world",
    srcs = [
        "hello-world.cc",
    ],
    deps = [
        ":hello-lib",
    ],
)

install(
    name = "install",
    targets = [
        ":hello-world",
    ],
)

# cc_test(
#     name = "hello-test",
#     srcs = [
#         "hello-test.cc",
#     ],
# )
