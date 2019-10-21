/**
 * @file chalk_demo.cc
 * @author Basit Ayantunde (rlamarrr@gmail.com)
 * @brief
 * @version 0.1
 * @date 2018-11-25
 *
 * @copyright Copyright (c) 2018
 *
 *
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF * * *
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO
 * EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR * ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH * THE SOFTWARE OR THE
 * USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 *
 */
#include <iostream>


#include "chalk.h"

using namespace chalk;

int main() {
  ostyler.formats.push_back(fmt::Bold);
  ostyler.formats.push_back(fmt::Underline);
  // std::cout << FormatWrap(fg::BrightGreen("Hello world!"), fmt::Bold);

  std::string bold = fmt::Bold("Bold");

  std::string underline = fmt::Underline("Underline");
  std::string italic = fmt::Italic("Italic");
  std::string conceal = fmt::Conceal("Conceal");
  std::string crossed_out = fmt::CrossedOut("Crossed Out");
  std::string faint = fmt::Faint("Faint");
  std::string rapid_blink = fmt::RapidBlink("Rapid Blink");
  std::string slow_blink = fmt::SlowBlink("Slow Blink");
  std::string reverse = fmt::Reverse("Reverse");

  ostyler << "\n\nFormatting Operations" << std::endl << std::endl;
  std::cout << bold << "   " << underline << "   " << italic << "   " << conceal
            << "   " << crossed_out << "   " << faint << "   " << rapid_blink
            << "   " << slow_blink << "   " << reverse << std::endl;

  ostyler << "\n\n"
          << "3/4 bit Colors"
          << "\n\n";

  std::cout << bg::Red("Red") << "    "
            << fg::Black(bg::BrightRed("Bright Red")) << "    "
            << fg::Red("Red") << "    " << fg::BrightRed("Bright Red")
            << "\n"
            << std::endl;

  std::cout << bg::Green("Green") << "    "
            << fg::Black(bg::BrightGreen("Bright Green")) << "    "
            << fg::Green("Green") << "    "
            << fg::BrightGreen("Bright Green") << "\n"
            << std::endl;

  std::cout << bg::Yellow("Yellow") << "    "
            << fg::Black(bg::BrightYellow("Bright Yellow")) << "    "
            << fg::Yellow("Yellow") << "    "
            << fg::BrightYellow("Bright Yellow") << "\n"
            << std::endl;

  std::cout << bg::Blue("Blue") << "    "
            << fg::Black(bg::BrightBlue("Bright Blue")) << "    "
            << fg::Blue("Blue") << "    "
            << fg::BrightBlue("Bright Blue") << "\n"
            << std::endl;

  std::cout << bg::Magenta("Magenta") << "    "
            << fg::Black(bg::BrightMagenta("Bright Magenta"))
            << "    " << fg::Magenta("Magenta") << "    "
            << fg::BrightMagenta("Bright Magenta") << "\n"
            << std::endl;

  std::cout << bg::Cyan("Cyan") << "    "
            << fg::Black(bg::BrightCyan("Bright Cyan")) << "    "
            << fg::Cyan("Cyan") << "    "
            << fg::BrightCyan("Bright Cyan") << "\n"
            << std::endl;

  std::cout << fg::Black(bg::White("White")) << "    "
            << fg::Black(bg::BrightWhite("Bright White")) << "    "
            << fg::White("White") << "    "
            << fg::BrightWhite("Bright White") << "\n\n\n"
            << std::endl;
}
