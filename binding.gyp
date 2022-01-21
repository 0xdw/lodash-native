{
  "targets": [
    {
      "target_name": "lodash_native",
      "sources": [
        "<!@(ls -1 lib/**/*.c)",
        "src/lodash_addon.c"
      ]
    }
  ]
}
