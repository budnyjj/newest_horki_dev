function reportMistake() {
    const SURROUNDING_SIZE = 3;
    // get selection range
    var range = null;
    if (window.getSelection) {
        range = window.getSelection().getRangeAt(0);
    } else if (document.selection.createRange) {
	range = document.selection.createRange();
    }
    if (range == null) {
        return;
    }
    // ontain prefix and suffix
    var wholeText = range.startContainer.wholeText;
    var beforeWords = wholeText
        .substr(0, range.startOffset)
        .trim()
        .split(' ');
    var prefix = beforeWords
        .slice(Math.max(beforeWords.length - SURROUNDING_SIZE, 0))
        .join(' ');
    var afterWords = wholeText
        .substr(range.endOffset, wholeText.length)
        .trim()
        .split(' ');
    var suffix = afterWords
        .slice(0, Math.min(SURROUNDING_SIZE, afterWords.length))
        .join(' ');
    var mistake = range.toString();
    var destinationUrl = '/node/15600'
        + '?destination=' + window.location.pathname
        + '&mistake=' + mistake
        + '&prefix=' + prefix
        + '&suffix=' + suffix;
    window.location.replace(destinationUrl);
}
