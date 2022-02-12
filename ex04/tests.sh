function output_file {
    echo "===================="
    cat creed.replace
    echo "===================="
}

echo "FILE creed:"
echo "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"
cat creed
echo "<<<<<<<<<<<<<<<<<<<<<<<<<<<<<"

./sedisforlosers creed a SED
echo "FILE creed.replace after 'a' to 'SED'"
output_file

./sedisforlosers creed d x
echo "FILE creed.replace after 'd' to 'x'"
output_file

./sedisforlosers creed x ~
echo "FILE creed.replace after 'x' to '~'"
output_file

./sedisforlosers creed x x
echo "FILE creed.replace after 'x' to 'x'"
output_file

./sedisforlosers creed x xx
echo "FILE creed.replace after 'x' to 'xx'"
output_file
