#!/opt/homebrew/bin/zsh

SCRIPT_DIR="$(cd "$(dirname "$0")" && pwd)"

BUILD_DIR="$SCRIPT_DIR/output"

input_file=$1 

if [ -z "$input_file" ]; then 
  echo "⚠️ Usage: $0 <cpp_file>" 
  exit 1 
fi

output_file="${input_file%.cpp}.o"

g++ -std=c++17 $input_file -o $BUILD_DIR/$output_file

# check exit code of previously executed command
if [ $? -eq 0 ]; then
  echo "\nBuild successful 😊: $BUILD_DIR/$output_file"
else
  echo "\nBuild failed ❌"
fi