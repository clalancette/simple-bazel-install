load("@simplebazelinstall//tools:install.bzl", "install")

package(default_visibility = ["//visibility:public"])

cc_binary(
    name = "hello-world",
    srcs = [
        "hello-world.cc",
    ],
)

install(
    name = "install",
    targets = [
        ":hello-world",
    ],
)
