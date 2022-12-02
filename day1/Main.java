package day1;


import java.io.IOException;
import java.nio.file.Files;
import java.nio.file.Paths;
import java.util.List;
import java.util.stream.Collectors;
import java.util.stream.Stream;

public class Main
{
    public static void main(String[] args) {
        List<String> lines = parseInputFile("./day1/input.txt");

        List<Integer> calories;

        int index = 0;
        for (String line : lines) {
            if(line == "") index++;

            // int calorie = Strings;
        }
    }

    // Read file as stream of string
    public static List<String> parseInputFile(String fileName)
    {
        try {
            return Files.lines(Paths.get(fileName)).collect(Collectors.toList());
        } catch (IOException e) {
            e.printStackTrace();
        }
        return null;
    }
}