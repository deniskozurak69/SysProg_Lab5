#ifndef SYSPROG_LAB5_SCANNER_HPP
#define SYSPROG_LAB5_SCANNER_HPP

#ifndef yyFlexLexerOnce

#include <FlexLexer.h>

#endif

#include "Parser.hpp"

namespace parsing {

    class Scanner : public yyFlexLexer {
    public:
        Scanner(std::istream &arg_yyin, std::ostream &arg_yyout)
                : yyFlexLexer(arg_yyin, arg_yyout) {}

        Scanner(std::istream *arg_yyin = nullptr, std::ostream *arg_yyout = nullptr)
                : yyFlexLexer(arg_yyin, arg_yyout) {}

        int lex(Parser::semantic_type *yylval);
    };

}

#endif
