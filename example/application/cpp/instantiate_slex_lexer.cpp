/*=============================================================================
    A Standard compliant C++ preprocessor

    Test the C preprocessor
    Explicit instantiation of the lex_functor generation function
    
    Copyright (c) 2001-2003 Hartmut Kaiser
    http://spirit.sourceforge.net/

    Permission to copy, use, modify, sell and distribute this software
    is granted provided this copyright notice appears in all copies.
    This software is provided "as is" without express or implied
    warranty, and with no claim as to its suitability for any purpose.

    See Copyright.txt for full copyright notices and acknowledgements.
=============================================================================*/

#include "cpp.hpp"          // config data

#if defined(CPP_SEPARATE_LEXER_INSTANTIATION) && defined(USE_SLEX_CPP_LEXER)

#include <string>

#include "cpplexer/cpp_token_ids.hpp"
#include "cpplexer/cpp_lex_iterator.hpp"
#include "cpplexer/slex/cpp_slex_token.hpp"

///////////////////////////////////////////////////////////////////////////////
//  The following file needs to be included only once throughout the whole
//  program.
#include "cpplexer/slex/cpp_slex_lexer.hpp"

///////////////////////////////////////////////////////////////////////////////
//
//  This instantiates the correct 'new_lexer' function, which generates the 
//  C++ lexer used in this sample.
//
//  This is moved into a separate compilation unit to decouple the compilation
//  of the C++ lexer from the compilation of the other modules, which helps to 
//  reduce compilation time.
//
//  The template parameter(s) supplied should be identical to the parameters
//  supplied while instantiating the lex_iterator<> template (see the file
//  test_slex_lexer.cpp).
//
///////////////////////////////////////////////////////////////////////////////

template cpplexer::slex::new_lexer_gen<std::string::iterator>;

#endif // defined(CPP_SEPARATE_LEXER_INSTANTIATION) && defined(USE_SLEX_CPP_LEXER)
