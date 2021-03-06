// *****************************************************************************
// lorem_ipsum.doxy.h                                              Tao3D project
// *****************************************************************************
//
// File description:
//
//
//
//
//
//
//
//
// *****************************************************************************
// This software is licensed under the GNU General Public License v3
// (C) 2011-2013, Baptiste Soulisse <baptiste.soulisse@taodyne.com>
// (C) 2011-2013, Catherine Burvelle <catherine@taodyne.com>
// (C) 2011-2014,2019, Christophe de Dinechin <christophe@dinechin.org>
// (C) 2011-2013, Jérôme Forissier <jerome@taodyne.com>
// (C) 2011-2013, Baptiste Soulisse <baptiste.soulisse@taodyne.com>
// *****************************************************************************
// This file is part of Tao3D
//
// Tao3D is free software: you can r redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Tao3D is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Tao3D, in a file named COPYING.
// If not, see <https://www.gnu.org/licenses/>.
// *****************************************************************************
/**
 * @~english
 * @taomoduledescription{LoremIpsum, Lorem Ipsum}
 * <tt>import LoremIpsum</tt> - Generate dummy text.@n
 *
 * The LoremIpsum module can be used to generate filler text when you need
 * to work on the layout of a document.
 *
 * The generated text does not mean anything, so the reader won't be distracted
 * by the contents when looking at the page layout. Your document will look
 * like normal English (or rather, Latin) because the letter distribution in
 * Lorem Ipsum is close to natural language.
 *
 * The generated text can be arbitrarily long; the lorem_ipsum function will
 * simply repeat the sequence as necessary. The base sequence has a length of
 * 69 words and is as follows:
 *
 * @~french
 * @taomoduledescription{LoremIpsum, Lorem Ipsum}
 * <tt>import LoremIpsum</tt> - Génère du texte de remplissage.@n
 *
 * Le module LoremIpsum est utile pour générer du texte de remplissage lorsque
 * vous voulez travailler sur la mise en page d'un document.
 *
 * Le texte n'a aucune signification, de sorte que le lecteur n'est pas
 * distrait pas le contenu lorsqu'il observe la mise en page. Le document
 * ressemble pourtant à un document normal en langue française car la répartition
 * des lettres de Lorem Ipsum est proche du langage naturel.
 *
 * Le texte généré a une longueur arbitraire. La fonction @ref lorem_ipsum
 * répète la même séquence lorsque plus de mots sont nécessaires. La séquence
 * de base est formée de 69 mots. Elle est la suivante :
 * @~
@verbatim
Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do
eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut
enim ad minim veniam, quis nostrud exercitation ullamco laboris
nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor
in reprehenderit in voluptate velit esse cillum dolore eu fugiat
nulla pariatur. Excepteur sint occaecat cupidatat non proident,
sunt in culpa qui officia deserunt mollit anim id est laborum.
@endverbatim
 *
 * @~english
 * Here is an example:
 *
 * @~french
 * Voici un exemple :
 *
 * @~
@code
import LoremIpsum

writeln lorem_ipsum 30
writeln "----"
writeln lorem_ipsum 30, 3
@endcode
 *
 * @~english
 * The above code generates the following output:
 *
 * @~french
 * Le code ci-dessus génère l'affichage suivant :
 *
 * @~
@verbatim
Lorem ipsum dolor sit amet, consectetur adipisicing elit,
sed do eiusmod tempor incididunt ut labore et dolore magna
aliqua. Ut enim ad minim veniam, quis nostrud exercitation
ullamco laboris nisi.
----
Lorem ipsum dolor sit amet.

Consectetur ipsum dolor sit amet.

Eiusmod ipsum dolor sit amet, consectetur adipisicing.
@endverbatim
 *
 * @endtaomoduledescription{LoremIpsum}
 * @{
 */

/**
 * @~english
 * Produces a sequence of words in pseudo-latin.
 * The text contains an arbitrary number of words, specified by @a words.
 * @~french
 * Produit une séquence de mots qui ressemble à du latin.
 * Le nombre de mots est spécifé par @a words.
 */
text lorem_ipsum(words:integer);


/**
 * @~english
 * Produces a sequence of paragraphs in pseudo-latin.
 * @a words is the total number of words. The text is split in @a para
 * paragraphs of approximately the same length. Paragraphs are separated by
 * two consecutive carriage returns.
 * @~french
 * Produit une séquence de paragraphes qui ressemble à du latin.
 * Le nombre de mots total est spécifé par @a words. Le texte est divisé en
 * @a para paragraphes de longueurs approximativement égales. Les paragraphes
 * sont séparés par une ligne vide (deux retours à la ligne successifs).
 */
text lorem_ipsum(words:integer, para:integer);

/**
 * @}
 */
