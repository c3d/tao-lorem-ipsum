/**
 * @taomoduledescription{LoremIpsum, Lorem Ipsum}
 *
 * @~english
 * <tt>import LoremIpsum</tt> - Generate dummy text.
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
 * <tt>import LoremIpsum</tt> - Génère du texte de remplissage.
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
