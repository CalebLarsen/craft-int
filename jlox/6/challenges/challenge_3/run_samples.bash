#!/bin/bash

set -e

function main() {
  for sample in $(find "$(pwd)/samples/" -type f -name "*.lox"); do
    echo "Sample $(basename $sample)"
    gradle app:run -q --args="$sample"
    echo "================================="
  done
}

main $@
