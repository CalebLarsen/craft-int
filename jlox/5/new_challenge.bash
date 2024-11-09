#!/bin/bash

set -e

function main() {
  mkdir -p challenges
  mkdir -p challenges/challenge_"$1"
  local new_dir=challenges/challenge_"$1"/
  cp Makefile $new_dir
  cp -r app $new_dir
  cp build.gradle $new_dir
  cp -r gradle $new_dir
  cp gradlew $new_dir
  cp gradlew.bat $new_dir
  cp settings.gradle $new_dir
  cp .gitignore $new_dir
  echo "Challenge" "$1" "created"
}

main "$@"
