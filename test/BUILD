cc_binary(
    name = 'test_opencc',
    srcs = ['test.cc'],
    deps = ['//opencc:opencc'],
    extra_linkflags = [
        '-lopencc',
        '-Lopencc/lib64_release',
    ],
)
