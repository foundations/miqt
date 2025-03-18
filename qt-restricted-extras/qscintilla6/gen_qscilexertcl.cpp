#include <QChildEvent>
#include <QColor>
#include <QEvent>
#include <QFont>
#include <QList>
#include <QMetaMethod>
#include <QMetaObject>
#include <QObject>
#include <QSettings>
#include <QString>
#include <QByteArray>
#include <cstring>
#include <QTimerEvent>
#include <qscilexertcl.h>
#include "gen_qscilexertcl.h"

#ifdef __cplusplus
extern "C" {
#endif

const char* miqt_exec_callback_QsciLexerTCL_language(const QsciLexerTCL*, intptr_t);
const char* miqt_exec_callback_QsciLexerTCL_lexer(const QsciLexerTCL*, intptr_t);
int miqt_exec_callback_QsciLexerTCL_lexerId(const QsciLexerTCL*, intptr_t);
const char* miqt_exec_callback_QsciLexerTCL_autoCompletionFillups(const QsciLexerTCL*, intptr_t);
struct miqt_array /* of struct miqt_string */  miqt_exec_callback_QsciLexerTCL_autoCompletionWordSeparators(const QsciLexerTCL*, intptr_t);
const char* miqt_exec_callback_QsciLexerTCL_blockEnd(const QsciLexerTCL*, intptr_t, int*);
int miqt_exec_callback_QsciLexerTCL_blockLookback(const QsciLexerTCL*, intptr_t);
const char* miqt_exec_callback_QsciLexerTCL_blockStart(const QsciLexerTCL*, intptr_t, int*);
const char* miqt_exec_callback_QsciLexerTCL_blockStartKeyword(const QsciLexerTCL*, intptr_t, int*);
int miqt_exec_callback_QsciLexerTCL_braceStyle(const QsciLexerTCL*, intptr_t);
bool miqt_exec_callback_QsciLexerTCL_caseSensitive(const QsciLexerTCL*, intptr_t);
QColor* miqt_exec_callback_QsciLexerTCL_color(const QsciLexerTCL*, intptr_t, int);
bool miqt_exec_callback_QsciLexerTCL_eolFill(const QsciLexerTCL*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerTCL_font(const QsciLexerTCL*, intptr_t, int);
int miqt_exec_callback_QsciLexerTCL_indentationGuideView(const QsciLexerTCL*, intptr_t);
const char* miqt_exec_callback_QsciLexerTCL_keywords(const QsciLexerTCL*, intptr_t, int);
int miqt_exec_callback_QsciLexerTCL_defaultStyle(const QsciLexerTCL*, intptr_t);
struct miqt_string miqt_exec_callback_QsciLexerTCL_description(const QsciLexerTCL*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerTCL_paper(const QsciLexerTCL*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerTCL_defaultColorWithStyle(const QsciLexerTCL*, intptr_t, int);
bool miqt_exec_callback_QsciLexerTCL_defaultEolFill(const QsciLexerTCL*, intptr_t, int);
QFont* miqt_exec_callback_QsciLexerTCL_defaultFontWithStyle(const QsciLexerTCL*, intptr_t, int);
QColor* miqt_exec_callback_QsciLexerTCL_defaultPaperWithStyle(const QsciLexerTCL*, intptr_t, int);
void miqt_exec_callback_QsciLexerTCL_setEditor(QsciLexerTCL*, intptr_t, QsciScintilla*);
void miqt_exec_callback_QsciLexerTCL_refreshProperties(QsciLexerTCL*, intptr_t);
int miqt_exec_callback_QsciLexerTCL_styleBitsNeeded(const QsciLexerTCL*, intptr_t);
const char* miqt_exec_callback_QsciLexerTCL_wordCharacters(const QsciLexerTCL*, intptr_t);
void miqt_exec_callback_QsciLexerTCL_setAutoIndentStyle(QsciLexerTCL*, intptr_t, int);
void miqt_exec_callback_QsciLexerTCL_setColor(QsciLexerTCL*, intptr_t, QColor*, int);
void miqt_exec_callback_QsciLexerTCL_setEolFill(QsciLexerTCL*, intptr_t, bool, int);
void miqt_exec_callback_QsciLexerTCL_setFont(QsciLexerTCL*, intptr_t, QFont*, int);
void miqt_exec_callback_QsciLexerTCL_setPaper(QsciLexerTCL*, intptr_t, QColor*, int);
bool miqt_exec_callback_QsciLexerTCL_readProperties(QsciLexerTCL*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerTCL_writeProperties(const QsciLexerTCL*, intptr_t, QSettings*, struct miqt_string);
bool miqt_exec_callback_QsciLexerTCL_event(QsciLexerTCL*, intptr_t, QEvent*);
bool miqt_exec_callback_QsciLexerTCL_eventFilter(QsciLexerTCL*, intptr_t, QObject*, QEvent*);
void miqt_exec_callback_QsciLexerTCL_timerEvent(QsciLexerTCL*, intptr_t, QTimerEvent*);
void miqt_exec_callback_QsciLexerTCL_childEvent(QsciLexerTCL*, intptr_t, QChildEvent*);
void miqt_exec_callback_QsciLexerTCL_customEvent(QsciLexerTCL*, intptr_t, QEvent*);
void miqt_exec_callback_QsciLexerTCL_connectNotify(QsciLexerTCL*, intptr_t, QMetaMethod*);
void miqt_exec_callback_QsciLexerTCL_disconnectNotify(QsciLexerTCL*, intptr_t, QMetaMethod*);
#ifdef __cplusplus
} /* extern C */
#endif

class MiqtVirtualQsciLexerTCL final : public QsciLexerTCL {
public:

	MiqtVirtualQsciLexerTCL(): QsciLexerTCL() {};
	MiqtVirtualQsciLexerTCL(QObject* parent): QsciLexerTCL(parent) {};

	virtual ~MiqtVirtualQsciLexerTCL() override = default;

	// cgo.Handle value for overwritten implementation
	intptr_t handle__language = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* language() const override {
		if (handle__language == 0) {
			return nullptr; // Pure virtual, there is no base we can call
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerTCL_language(this, handle__language);

		return callback_return_value;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexer = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* lexer() const override {
		if (handle__lexer == 0) {
			return QsciLexerTCL::lexer();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerTCL_lexer(this, handle__lexer);

		return callback_return_value;
	}

	friend const char* QsciLexerTCL_virtualbase_lexer(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__lexerId = 0;

	// Subclass to allow providing a Go implementation
	virtual int lexerId() const override {
		if (handle__lexerId == 0) {
			return QsciLexerTCL::lexerId();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerTCL_lexerId(this, handle__lexerId);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerTCL_virtualbase_lexerId(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionFillups = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* autoCompletionFillups() const override {
		if (handle__autoCompletionFillups == 0) {
			return QsciLexerTCL::autoCompletionFillups();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerTCL_autoCompletionFillups(this, handle__autoCompletionFillups);

		return callback_return_value;
	}

	friend const char* QsciLexerTCL_virtualbase_autoCompletionFillups(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__autoCompletionWordSeparators = 0;

	// Subclass to allow providing a Go implementation
	virtual QStringList autoCompletionWordSeparators() const override {
		if (handle__autoCompletionWordSeparators == 0) {
			return QsciLexerTCL::autoCompletionWordSeparators();
		}
		

		struct miqt_array /* of struct miqt_string */  callback_return_value = miqt_exec_callback_QsciLexerTCL_autoCompletionWordSeparators(this, handle__autoCompletionWordSeparators);
		QStringList callback_return_value_QList;
		callback_return_value_QList.reserve(callback_return_value.len);
		struct miqt_string* callback_return_value_arr = static_cast<struct miqt_string*>(callback_return_value.data);
		for(size_t i = 0; i < callback_return_value.len; ++i) {
			QString callback_return_value_arr_i_QString = QString::fromUtf8(callback_return_value_arr[i].data, callback_return_value_arr[i].len);
			callback_return_value_QList.push_back(callback_return_value_arr_i_QString);
		}

		return callback_return_value_QList;
	}

	friend struct miqt_array /* of struct miqt_string */  QsciLexerTCL_virtualbase_autoCompletionWordSeparators(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockEnd = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockEnd(int* style) const override {
		if (handle__blockEnd == 0) {
			return QsciLexerTCL::blockEnd(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerTCL_blockEnd(this, handle__blockEnd, sigval1);

		return callback_return_value;
	}

	friend const char* QsciLexerTCL_virtualbase_blockEnd(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockLookback = 0;

	// Subclass to allow providing a Go implementation
	virtual int blockLookback() const override {
		if (handle__blockLookback == 0) {
			return QsciLexerTCL::blockLookback();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerTCL_blockLookback(this, handle__blockLookback);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerTCL_virtualbase_blockLookback(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStart = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStart(int* style) const override {
		if (handle__blockStart == 0) {
			return QsciLexerTCL::blockStart(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerTCL_blockStart(this, handle__blockStart, sigval1);

		return callback_return_value;
	}

	friend const char* QsciLexerTCL_virtualbase_blockStart(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__blockStartKeyword = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* blockStartKeyword(int* style) const override {
		if (handle__blockStartKeyword == 0) {
			return QsciLexerTCL::blockStartKeyword(style);
		}
		
		int* sigval1 = style;

		const char* callback_return_value = miqt_exec_callback_QsciLexerTCL_blockStartKeyword(this, handle__blockStartKeyword, sigval1);

		return callback_return_value;
	}

	friend const char* QsciLexerTCL_virtualbase_blockStartKeyword(const void* self, int* style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__braceStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int braceStyle() const override {
		if (handle__braceStyle == 0) {
			return QsciLexerTCL::braceStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerTCL_braceStyle(this, handle__braceStyle);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerTCL_virtualbase_braceStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__caseSensitive = 0;

	// Subclass to allow providing a Go implementation
	virtual bool caseSensitive() const override {
		if (handle__caseSensitive == 0) {
			return QsciLexerTCL::caseSensitive();
		}
		

		bool callback_return_value = miqt_exec_callback_QsciLexerTCL_caseSensitive(this, handle__caseSensitive);

		return callback_return_value;
	}

	friend bool QsciLexerTCL_virtualbase_caseSensitive(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__color = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor color(int style) const override {
		if (handle__color == 0) {
			return QsciLexerTCL::color(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerTCL_color(this, handle__color, sigval1);

		return *callback_return_value;
	}

	friend QColor* QsciLexerTCL_virtualbase_color(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eolFill(int style) const override {
		if (handle__eolFill == 0) {
			return QsciLexerTCL::eolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerTCL_eolFill(this, handle__eolFill, sigval1);

		return callback_return_value;
	}

	friend bool QsciLexerTCL_virtualbase_eolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__font = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont font(int style) const override {
		if (handle__font == 0) {
			return QsciLexerTCL::font(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerTCL_font(this, handle__font, sigval1);

		return *callback_return_value;
	}

	friend QFont* QsciLexerTCL_virtualbase_font(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__indentationGuideView = 0;

	// Subclass to allow providing a Go implementation
	virtual int indentationGuideView() const override {
		if (handle__indentationGuideView == 0) {
			return QsciLexerTCL::indentationGuideView();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerTCL_indentationGuideView(this, handle__indentationGuideView);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerTCL_virtualbase_indentationGuideView(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__keywords = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* keywords(int set) const override {
		if (handle__keywords == 0) {
			return QsciLexerTCL::keywords(set);
		}
		
		int sigval1 = set;

		const char* callback_return_value = miqt_exec_callback_QsciLexerTCL_keywords(this, handle__keywords, sigval1);

		return callback_return_value;
	}

	friend const char* QsciLexerTCL_virtualbase_keywords(const void* self, int set);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual int defaultStyle() const override {
		if (handle__defaultStyle == 0) {
			return QsciLexerTCL::defaultStyle();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerTCL_defaultStyle(this, handle__defaultStyle);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerTCL_virtualbase_defaultStyle(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__description = 0;

	// Subclass to allow providing a Go implementation
	virtual QString description(int style) const override {
		if (handle__description == 0) {
			return QString(); // Pure virtual, there is no base we can call
		}
		
		int sigval1 = style;

		struct miqt_string callback_return_value = miqt_exec_callback_QsciLexerTCL_description(this, handle__description, sigval1);
		QString callback_return_value_QString = QString::fromUtf8(callback_return_value.data, callback_return_value.len);

		return callback_return_value_QString;
	}

	// cgo.Handle value for overwritten implementation
	intptr_t handle__paper = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor paper(int style) const override {
		if (handle__paper == 0) {
			return QsciLexerTCL::paper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerTCL_paper(this, handle__paper, sigval1);

		return *callback_return_value;
	}

	friend QColor* QsciLexerTCL_virtualbase_paper(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultColorWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultColor(int style) const override {
		if (handle__defaultColorWithStyle == 0) {
			return QsciLexerTCL::defaultColor(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerTCL_defaultColorWithStyle(this, handle__defaultColorWithStyle, sigval1);

		return *callback_return_value;
	}

	friend QColor* QsciLexerTCL_virtualbase_defaultColorWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual bool defaultEolFill(int style) const override {
		if (handle__defaultEolFill == 0) {
			return QsciLexerTCL::defaultEolFill(style);
		}
		
		int sigval1 = style;

		bool callback_return_value = miqt_exec_callback_QsciLexerTCL_defaultEolFill(this, handle__defaultEolFill, sigval1);

		return callback_return_value;
	}

	friend bool QsciLexerTCL_virtualbase_defaultEolFill(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultFontWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QFont defaultFont(int style) const override {
		if (handle__defaultFontWithStyle == 0) {
			return QsciLexerTCL::defaultFont(style);
		}
		
		int sigval1 = style;

		QFont* callback_return_value = miqt_exec_callback_QsciLexerTCL_defaultFontWithStyle(this, handle__defaultFontWithStyle, sigval1);

		return *callback_return_value;
	}

	friend QFont* QsciLexerTCL_virtualbase_defaultFontWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__defaultPaperWithStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual QColor defaultPaper(int style) const override {
		if (handle__defaultPaperWithStyle == 0) {
			return QsciLexerTCL::defaultPaper(style);
		}
		
		int sigval1 = style;

		QColor* callback_return_value = miqt_exec_callback_QsciLexerTCL_defaultPaperWithStyle(this, handle__defaultPaperWithStyle, sigval1);

		return *callback_return_value;
	}

	friend QColor* QsciLexerTCL_virtualbase_defaultPaperWithStyle(const void* self, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEditor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEditor(QsciScintilla* editor) override {
		if (handle__setEditor == 0) {
			QsciLexerTCL::setEditor(editor);
			return;
		}
		
		QsciScintilla* sigval1 = editor;

		miqt_exec_callback_QsciLexerTCL_setEditor(this, handle__setEditor, sigval1);

		
	}

	friend void QsciLexerTCL_virtualbase_setEditor(void* self, QsciScintilla* editor);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__refreshProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual void refreshProperties() override {
		if (handle__refreshProperties == 0) {
			QsciLexerTCL::refreshProperties();
			return;
		}
		

		miqt_exec_callback_QsciLexerTCL_refreshProperties(this, handle__refreshProperties);

		
	}

	friend void QsciLexerTCL_virtualbase_refreshProperties(void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__styleBitsNeeded = 0;

	// Subclass to allow providing a Go implementation
	virtual int styleBitsNeeded() const override {
		if (handle__styleBitsNeeded == 0) {
			return QsciLexerTCL::styleBitsNeeded();
		}
		

		int callback_return_value = miqt_exec_callback_QsciLexerTCL_styleBitsNeeded(this, handle__styleBitsNeeded);

		return static_cast<int>(callback_return_value);
	}

	friend int QsciLexerTCL_virtualbase_styleBitsNeeded(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__wordCharacters = 0;

	// Subclass to allow providing a Go implementation
	virtual const char* wordCharacters() const override {
		if (handle__wordCharacters == 0) {
			return QsciLexerTCL::wordCharacters();
		}
		

		const char* callback_return_value = miqt_exec_callback_QsciLexerTCL_wordCharacters(this, handle__wordCharacters);

		return callback_return_value;
	}

	friend const char* QsciLexerTCL_virtualbase_wordCharacters(const void* self);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setAutoIndentStyle = 0;

	// Subclass to allow providing a Go implementation
	virtual void setAutoIndentStyle(int autoindentstyle) override {
		if (handle__setAutoIndentStyle == 0) {
			QsciLexerTCL::setAutoIndentStyle(autoindentstyle);
			return;
		}
		
		int sigval1 = autoindentstyle;

		miqt_exec_callback_QsciLexerTCL_setAutoIndentStyle(this, handle__setAutoIndentStyle, sigval1);

		
	}

	friend void QsciLexerTCL_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setColor = 0;

	// Subclass to allow providing a Go implementation
	virtual void setColor(const QColor& c, int style) override {
		if (handle__setColor == 0) {
			QsciLexerTCL::setColor(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerTCL_setColor(this, handle__setColor, sigval1, sigval2);

		
	}

	friend void QsciLexerTCL_virtualbase_setColor(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setEolFill = 0;

	// Subclass to allow providing a Go implementation
	virtual void setEolFill(bool eoffill, int style) override {
		if (handle__setEolFill == 0) {
			QsciLexerTCL::setEolFill(eoffill, style);
			return;
		}
		
		bool sigval1 = eoffill;
		int sigval2 = style;

		miqt_exec_callback_QsciLexerTCL_setEolFill(this, handle__setEolFill, sigval1, sigval2);

		
	}

	friend void QsciLexerTCL_virtualbase_setEolFill(void* self, bool eoffill, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setFont = 0;

	// Subclass to allow providing a Go implementation
	virtual void setFont(const QFont& f, int style) override {
		if (handle__setFont == 0) {
			QsciLexerTCL::setFont(f, style);
			return;
		}
		
		const QFont& f_ret = f;
		// Cast returned reference into pointer
		QFont* sigval1 = const_cast<QFont*>(&f_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerTCL_setFont(this, handle__setFont, sigval1, sigval2);

		
	}

	friend void QsciLexerTCL_virtualbase_setFont(void* self, QFont* f, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__setPaper = 0;

	// Subclass to allow providing a Go implementation
	virtual void setPaper(const QColor& c, int style) override {
		if (handle__setPaper == 0) {
			QsciLexerTCL::setPaper(c, style);
			return;
		}
		
		const QColor& c_ret = c;
		// Cast returned reference into pointer
		QColor* sigval1 = const_cast<QColor*>(&c_ret);
		int sigval2 = style;

		miqt_exec_callback_QsciLexerTCL_setPaper(this, handle__setPaper, sigval1, sigval2);

		
	}

	friend void QsciLexerTCL_virtualbase_setPaper(void* self, QColor* c, int style);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__readProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool readProperties(QSettings& qs, const QString& prefix) override {
		if (handle__readProperties == 0) {
			return QsciLexerTCL::readProperties(qs, prefix);
		}
		
		QSettings& qs_ret = qs;
		// Cast returned reference into pointer
		QSettings* sigval1 = &qs_ret;
		const QString prefix_ret = prefix;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray prefix_b = prefix_ret.toUtf8();
		struct miqt_string prefix_ms;
		prefix_ms.len = prefix_b.length();
		prefix_ms.data = static_cast<char*>(malloc(prefix_ms.len));
		memcpy(prefix_ms.data, prefix_b.data(), prefix_ms.len);
		struct miqt_string sigval2 = prefix_ms;

		bool callback_return_value = miqt_exec_callback_QsciLexerTCL_readProperties(this, handle__readProperties, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QsciLexerTCL_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__writeProperties = 0;

	// Subclass to allow providing a Go implementation
	virtual bool writeProperties(QSettings& qs, const QString& prefix) const override {
		if (handle__writeProperties == 0) {
			return QsciLexerTCL::writeProperties(qs, prefix);
		}
		
		QSettings& qs_ret = qs;
		// Cast returned reference into pointer
		QSettings* sigval1 = &qs_ret;
		const QString prefix_ret = prefix;
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray prefix_b = prefix_ret.toUtf8();
		struct miqt_string prefix_ms;
		prefix_ms.len = prefix_b.length();
		prefix_ms.data = static_cast<char*>(malloc(prefix_ms.len));
		memcpy(prefix_ms.data, prefix_b.data(), prefix_ms.len);
		struct miqt_string sigval2 = prefix_ms;

		bool callback_return_value = miqt_exec_callback_QsciLexerTCL_writeProperties(this, handle__writeProperties, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QsciLexerTCL_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__event = 0;

	// Subclass to allow providing a Go implementation
	virtual bool event(QEvent* event) override {
		if (handle__event == 0) {
			return QsciLexerTCL::event(event);
		}
		
		QEvent* sigval1 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerTCL_event(this, handle__event, sigval1);

		return callback_return_value;
	}

	friend bool QsciLexerTCL_virtualbase_event(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__eventFilter = 0;

	// Subclass to allow providing a Go implementation
	virtual bool eventFilter(QObject* watched, QEvent* event) override {
		if (handle__eventFilter == 0) {
			return QsciLexerTCL::eventFilter(watched, event);
		}
		
		QObject* sigval1 = watched;
		QEvent* sigval2 = event;

		bool callback_return_value = miqt_exec_callback_QsciLexerTCL_eventFilter(this, handle__eventFilter, sigval1, sigval2);

		return callback_return_value;
	}

	friend bool QsciLexerTCL_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__timerEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void timerEvent(QTimerEvent* event) override {
		if (handle__timerEvent == 0) {
			QsciLexerTCL::timerEvent(event);
			return;
		}
		
		QTimerEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerTCL_timerEvent(this, handle__timerEvent, sigval1);

		
	}

	friend void QsciLexerTCL_virtualbase_timerEvent(void* self, QTimerEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__childEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void childEvent(QChildEvent* event) override {
		if (handle__childEvent == 0) {
			QsciLexerTCL::childEvent(event);
			return;
		}
		
		QChildEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerTCL_childEvent(this, handle__childEvent, sigval1);

		
	}

	friend void QsciLexerTCL_virtualbase_childEvent(void* self, QChildEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__customEvent = 0;

	// Subclass to allow providing a Go implementation
	virtual void customEvent(QEvent* event) override {
		if (handle__customEvent == 0) {
			QsciLexerTCL::customEvent(event);
			return;
		}
		
		QEvent* sigval1 = event;

		miqt_exec_callback_QsciLexerTCL_customEvent(this, handle__customEvent, sigval1);

		
	}

	friend void QsciLexerTCL_virtualbase_customEvent(void* self, QEvent* event);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__connectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void connectNotify(const QMetaMethod& signal) override {
		if (handle__connectNotify == 0) {
			QsciLexerTCL::connectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerTCL_connectNotify(this, handle__connectNotify, sigval1);

		
	}

	friend void QsciLexerTCL_virtualbase_connectNotify(void* self, QMetaMethod* signal);

	// cgo.Handle value for overwritten implementation
	intptr_t handle__disconnectNotify = 0;

	// Subclass to allow providing a Go implementation
	virtual void disconnectNotify(const QMetaMethod& signal) override {
		if (handle__disconnectNotify == 0) {
			QsciLexerTCL::disconnectNotify(signal);
			return;
		}
		
		const QMetaMethod& signal_ret = signal;
		// Cast returned reference into pointer
		QMetaMethod* sigval1 = const_cast<QMetaMethod*>(&signal_ret);

		miqt_exec_callback_QsciLexerTCL_disconnectNotify(this, handle__disconnectNotify, sigval1);

		
	}

	friend void QsciLexerTCL_virtualbase_disconnectNotify(void* self, QMetaMethod* signal);

	// Wrappers to allow calling protected methods:
	friend bool QsciLexerTCL_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix);
	friend bool QsciLexerTCL_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix);
	friend QObject* QsciLexerTCL_protectedbase_sender(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerTCL_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self);
	friend int QsciLexerTCL_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal);
	friend bool QsciLexerTCL_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal);
};

QsciLexerTCL* QsciLexerTCL_new() {
	return new MiqtVirtualQsciLexerTCL();
}

QsciLexerTCL* QsciLexerTCL_new2(QObject* parent) {
	return new MiqtVirtualQsciLexerTCL(parent);
}

void QsciLexerTCL_virtbase(QsciLexerTCL* src, QsciLexer** outptr_QsciLexer) {
	*outptr_QsciLexer = static_cast<QsciLexer*>(src);
}

QMetaObject* QsciLexerTCL_metaObject(const QsciLexerTCL* self) {
	return (QMetaObject*) self->metaObject();
}

void* QsciLexerTCL_metacast(QsciLexerTCL* self, const char* param1) {
	return self->qt_metacast(param1);
}

struct miqt_string QsciLexerTCL_tr(const char* s) {
	QString _ret = QsciLexerTCL::tr(s);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

const char* QsciLexerTCL_language(const QsciLexerTCL* self) {
	return (const char*) self->language();
}

const char* QsciLexerTCL_lexer(const QsciLexerTCL* self) {
	return (const char*) self->lexer();
}

int QsciLexerTCL_braceStyle(const QsciLexerTCL* self) {
	return self->braceStyle();
}

QColor* QsciLexerTCL_defaultColor(const QsciLexerTCL* self, int style) {
	return new QColor(self->defaultColor(static_cast<int>(style)));
}

bool QsciLexerTCL_defaultEolFill(const QsciLexerTCL* self, int style) {
	return self->defaultEolFill(static_cast<int>(style));
}

QFont* QsciLexerTCL_defaultFont(const QsciLexerTCL* self, int style) {
	return new QFont(self->defaultFont(static_cast<int>(style)));
}

QColor* QsciLexerTCL_defaultPaper(const QsciLexerTCL* self, int style) {
	return new QColor(self->defaultPaper(static_cast<int>(style)));
}

const char* QsciLexerTCL_keywords(const QsciLexerTCL* self, int set) {
	return (const char*) self->keywords(static_cast<int>(set));
}

struct miqt_string QsciLexerTCL_description(const QsciLexerTCL* self, int style) {
	QString _ret = self->description(static_cast<int>(style));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

void QsciLexerTCL_refreshProperties(QsciLexerTCL* self) {
	self->refreshProperties();
}

void QsciLexerTCL_setFoldComments(QsciLexerTCL* self, bool fold) {
	self->setFoldComments(fold);
}

bool QsciLexerTCL_foldComments(const QsciLexerTCL* self) {
	return self->foldComments();
}

struct miqt_string QsciLexerTCL_tr2(const char* s, const char* c) {
	QString _ret = QsciLexerTCL::tr(s, c);
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

struct miqt_string QsciLexerTCL_tr3(const char* s, const char* c, int n) {
	QString _ret = QsciLexerTCL::tr(s, c, static_cast<int>(n));
	// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
	QByteArray _b = _ret.toUtf8();
	struct miqt_string _ms;
	_ms.len = _b.length();
	_ms.data = static_cast<char*>(malloc(_ms.len));
	memcpy(_ms.data, _b.data(), _ms.len);
	return _ms;
}

bool QsciLexerTCL_override_virtual_language(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__language = slot;
	return true;
}

bool QsciLexerTCL_override_virtual_lexer(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__lexer = slot;
	return true;
}

const char* QsciLexerTCL_virtualbase_lexer(const void* self) {

	return (const char*) ( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::lexer();

}

bool QsciLexerTCL_override_virtual_lexerId(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__lexerId = slot;
	return true;
}

int QsciLexerTCL_virtualbase_lexerId(const void* self) {

	return ( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::lexerId();

}

bool QsciLexerTCL_override_virtual_autoCompletionFillups(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__autoCompletionFillups = slot;
	return true;
}

const char* QsciLexerTCL_virtualbase_autoCompletionFillups(const void* self) {

	return (const char*) ( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::autoCompletionFillups();

}

bool QsciLexerTCL_override_virtual_autoCompletionWordSeparators(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__autoCompletionWordSeparators = slot;
	return true;
}

struct miqt_array /* of struct miqt_string */  QsciLexerTCL_virtualbase_autoCompletionWordSeparators(const void* self) {

	QStringList _ret = ( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::autoCompletionWordSeparators();
	// Convert QList<> from C++ memory to manually-managed C memory
	struct miqt_string* _arr = static_cast<struct miqt_string*>(malloc(sizeof(struct miqt_string) * _ret.length()));
	for (size_t i = 0, e = _ret.length(); i < e; ++i) {
		QString _lv_ret = _ret[i];
		// Convert QString from UTF-16 in C++ RAII memory to UTF-8 in manually-managed C memory
		QByteArray _lv_b = _lv_ret.toUtf8();
		struct miqt_string _lv_ms;
		_lv_ms.len = _lv_b.length();
		_lv_ms.data = static_cast<char*>(malloc(_lv_ms.len));
		memcpy(_lv_ms.data, _lv_b.data(), _lv_ms.len);
		_arr[i] = _lv_ms;
	}
	struct miqt_array _out;
	_out.len = _ret.length();
	_out.data = static_cast<void*>(_arr);
	return _out;

}

bool QsciLexerTCL_override_virtual_blockEnd(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockEnd = slot;
	return true;
}

const char* QsciLexerTCL_virtualbase_blockEnd(const void* self, int* style) {

	return (const char*) ( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::blockEnd(static_cast<int*>(style));

}

bool QsciLexerTCL_override_virtual_blockLookback(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockLookback = slot;
	return true;
}

int QsciLexerTCL_virtualbase_blockLookback(const void* self) {

	return ( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::blockLookback();

}

bool QsciLexerTCL_override_virtual_blockStart(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockStart = slot;
	return true;
}

const char* QsciLexerTCL_virtualbase_blockStart(const void* self, int* style) {

	return (const char*) ( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::blockStart(static_cast<int*>(style));

}

bool QsciLexerTCL_override_virtual_blockStartKeyword(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__blockStartKeyword = slot;
	return true;
}

const char* QsciLexerTCL_virtualbase_blockStartKeyword(const void* self, int* style) {

	return (const char*) ( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::blockStartKeyword(static_cast<int*>(style));

}

bool QsciLexerTCL_override_virtual_braceStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__braceStyle = slot;
	return true;
}

int QsciLexerTCL_virtualbase_braceStyle(const void* self) {

	return ( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::braceStyle();

}

bool QsciLexerTCL_override_virtual_caseSensitive(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__caseSensitive = slot;
	return true;
}

bool QsciLexerTCL_virtualbase_caseSensitive(const void* self) {

	return ( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::caseSensitive();

}

bool QsciLexerTCL_override_virtual_color(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__color = slot;
	return true;
}

QColor* QsciLexerTCL_virtualbase_color(const void* self, int style) {

	return new QColor(( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::color(static_cast<int>(style)));

}

bool QsciLexerTCL_override_virtual_eolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eolFill = slot;
	return true;
}

bool QsciLexerTCL_virtualbase_eolFill(const void* self, int style) {

	return ( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::eolFill(static_cast<int>(style));

}

bool QsciLexerTCL_override_virtual_font(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__font = slot;
	return true;
}

QFont* QsciLexerTCL_virtualbase_font(const void* self, int style) {

	return new QFont(( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::font(static_cast<int>(style)));

}

bool QsciLexerTCL_override_virtual_indentationGuideView(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__indentationGuideView = slot;
	return true;
}

int QsciLexerTCL_virtualbase_indentationGuideView(const void* self) {

	return ( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::indentationGuideView();

}

bool QsciLexerTCL_override_virtual_keywords(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__keywords = slot;
	return true;
}

const char* QsciLexerTCL_virtualbase_keywords(const void* self, int set) {

	return (const char*) ( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::keywords(static_cast<int>(set));

}

bool QsciLexerTCL_override_virtual_defaultStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultStyle = slot;
	return true;
}

int QsciLexerTCL_virtualbase_defaultStyle(const void* self) {

	return ( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::defaultStyle();

}

bool QsciLexerTCL_override_virtual_description(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__description = slot;
	return true;
}

bool QsciLexerTCL_override_virtual_paper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__paper = slot;
	return true;
}

QColor* QsciLexerTCL_virtualbase_paper(const void* self, int style) {

	return new QColor(( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::paper(static_cast<int>(style)));

}

bool QsciLexerTCL_override_virtual_defaultColorWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultColorWithStyle = slot;
	return true;
}

QColor* QsciLexerTCL_virtualbase_defaultColorWithStyle(const void* self, int style) {

	return new QColor(( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::defaultColor(static_cast<int>(style)));

}

bool QsciLexerTCL_override_virtual_defaultEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultEolFill = slot;
	return true;
}

bool QsciLexerTCL_virtualbase_defaultEolFill(const void* self, int style) {

	return ( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::defaultEolFill(static_cast<int>(style));

}

bool QsciLexerTCL_override_virtual_defaultFontWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultFontWithStyle = slot;
	return true;
}

QFont* QsciLexerTCL_virtualbase_defaultFontWithStyle(const void* self, int style) {

	return new QFont(( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::defaultFont(static_cast<int>(style)));

}

bool QsciLexerTCL_override_virtual_defaultPaperWithStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__defaultPaperWithStyle = slot;
	return true;
}

QColor* QsciLexerTCL_virtualbase_defaultPaperWithStyle(const void* self, int style) {

	return new QColor(( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::defaultPaper(static_cast<int>(style)));

}

bool QsciLexerTCL_override_virtual_setEditor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setEditor = slot;
	return true;
}

void QsciLexerTCL_virtualbase_setEditor(void* self, QsciScintilla* editor) {

	( (MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::setEditor(editor);

}

bool QsciLexerTCL_override_virtual_refreshProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__refreshProperties = slot;
	return true;
}

void QsciLexerTCL_virtualbase_refreshProperties(void* self) {

	( (MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::refreshProperties();

}

bool QsciLexerTCL_override_virtual_styleBitsNeeded(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__styleBitsNeeded = slot;
	return true;
}

int QsciLexerTCL_virtualbase_styleBitsNeeded(const void* self) {

	return ( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::styleBitsNeeded();

}

bool QsciLexerTCL_override_virtual_wordCharacters(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__wordCharacters = slot;
	return true;
}

const char* QsciLexerTCL_virtualbase_wordCharacters(const void* self) {

	return (const char*) ( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::wordCharacters();

}

bool QsciLexerTCL_override_virtual_setAutoIndentStyle(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setAutoIndentStyle = slot;
	return true;
}

void QsciLexerTCL_virtualbase_setAutoIndentStyle(void* self, int autoindentstyle) {

	( (MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::setAutoIndentStyle(static_cast<int>(autoindentstyle));

}

bool QsciLexerTCL_override_virtual_setColor(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setColor = slot;
	return true;
}

void QsciLexerTCL_virtualbase_setColor(void* self, QColor* c, int style) {

	( (MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::setColor(*c, static_cast<int>(style));

}

bool QsciLexerTCL_override_virtual_setEolFill(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setEolFill = slot;
	return true;
}

void QsciLexerTCL_virtualbase_setEolFill(void* self, bool eoffill, int style) {

	( (MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::setEolFill(eoffill, static_cast<int>(style));

}

bool QsciLexerTCL_override_virtual_setFont(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setFont = slot;
	return true;
}

void QsciLexerTCL_virtualbase_setFont(void* self, QFont* f, int style) {

	( (MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::setFont(*f, static_cast<int>(style));

}

bool QsciLexerTCL_override_virtual_setPaper(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__setPaper = slot;
	return true;
}

void QsciLexerTCL_virtualbase_setPaper(void* self, QColor* c, int style) {

	( (MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::setPaper(*c, static_cast<int>(style));

}

bool QsciLexerTCL_override_virtual_readProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__readProperties = slot;
	return true;
}

bool QsciLexerTCL_virtualbase_readProperties(void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

	return ( (MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::readProperties(*qs, prefix_QString);

}

bool QsciLexerTCL_override_virtual_writeProperties(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__writeProperties = slot;
	return true;
}

bool QsciLexerTCL_virtualbase_writeProperties(const void* self, QSettings* qs, struct miqt_string prefix) {
	QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

	return ( (const MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::writeProperties(*qs, prefix_QString);

}

bool QsciLexerTCL_override_virtual_event(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__event = slot;
	return true;
}

bool QsciLexerTCL_virtualbase_event(void* self, QEvent* event) {

	return ( (MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::event(event);

}

bool QsciLexerTCL_override_virtual_eventFilter(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__eventFilter = slot;
	return true;
}

bool QsciLexerTCL_virtualbase_eventFilter(void* self, QObject* watched, QEvent* event) {

	return ( (MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::eventFilter(watched, event);

}

bool QsciLexerTCL_override_virtual_timerEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__timerEvent = slot;
	return true;
}

void QsciLexerTCL_virtualbase_timerEvent(void* self, QTimerEvent* event) {

	( (MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::timerEvent(event);

}

bool QsciLexerTCL_override_virtual_childEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__childEvent = slot;
	return true;
}

void QsciLexerTCL_virtualbase_childEvent(void* self, QChildEvent* event) {

	( (MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::childEvent(event);

}

bool QsciLexerTCL_override_virtual_customEvent(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__customEvent = slot;
	return true;
}

void QsciLexerTCL_virtualbase_customEvent(void* self, QEvent* event) {

	( (MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::customEvent(event);

}

bool QsciLexerTCL_override_virtual_connectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__connectNotify = slot;
	return true;
}

void QsciLexerTCL_virtualbase_connectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::connectNotify(*signal);

}

bool QsciLexerTCL_override_virtual_disconnectNotify(void* self, intptr_t slot) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		return false;
	}
	
	self_cast->handle__disconnectNotify = slot;
	return true;
}

void QsciLexerTCL_virtualbase_disconnectNotify(void* self, QMetaMethod* signal) {

	( (MiqtVirtualQsciLexerTCL*)(self) )->QsciLexerTCL::disconnectNotify(*signal);

}

bool QsciLexerTCL_protectedbase_readProperties(bool* _dynamic_cast_ok, void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
			QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

	return self_cast->readProperties(*qs, prefix_QString);

}

bool QsciLexerTCL_protectedbase_writeProperties(bool* _dynamic_cast_ok, const void* self, QSettings* qs, struct miqt_string prefix) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
			QString prefix_QString = QString::fromUtf8(prefix.data, prefix.len);

	return self_cast->writeProperties(*qs, prefix_QString);

}

QObject* QsciLexerTCL_protectedbase_sender(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return nullptr;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->sender();

}

int QsciLexerTCL_protectedbase_senderSignalIndex(bool* _dynamic_cast_ok, const void* self) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->senderSignalIndex();

}

int QsciLexerTCL_protectedbase_receivers(bool* _dynamic_cast_ok, const void* self, const char* signal) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return 0;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->receivers(signal);

}

bool QsciLexerTCL_protectedbase_isSignalConnected(bool* _dynamic_cast_ok, const void* self, QMetaMethod* signal) {
	MiqtVirtualQsciLexerTCL* self_cast = dynamic_cast<MiqtVirtualQsciLexerTCL*>( (QsciLexerTCL*)(self) );
	if (self_cast == nullptr) {
		*_dynamic_cast_ok = false;
		return false;
	}
	
	*_dynamic_cast_ok = true;
	
	return self_cast->isSignalConnected(*signal);

}

void QsciLexerTCL_delete(QsciLexerTCL* self) {
	delete self;
}

