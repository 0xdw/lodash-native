{
  "targets": [
    {
      "target_name": "lodash_native",
      'cflags!': [ '-fno-exceptions' ],
      "sources": [
        "<!@(ls -1 lib/**/*.c)",
        "src/lodash_addon.c"
      ],
      'msvs_settings': {
        'VCCLCompilerTool': { 'ExceptionHandling': 1 },
      },
      "conditions": [
        ["OS == 'win'", {
          "libraries": []
        }]
      ]
    }
  ]
}
