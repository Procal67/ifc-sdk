/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2008 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCTEXTSTYLETEXTMODEL_H
#define IFC2X3_IFCTEXTSTYLETEXTMODEL_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <string>
#include <Step/SPFData.h>
#include <Step/BaseEntity.h>
#include <Step/String.h>
#include <Step/Referenced.h>

namespace ifc2x3 {

    class CopyOp;
    class IfcSizeSelect;

    /**
     */
    class IFC2X3_DLL_DEF IfcTextStyleTextModel : public Step::BaseEntity {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'TextIndent'.
         * 
         */
        virtual IfcSizeSelect *getTextIndent();
        /**
         * (const) Returns the value of the explicit attribute 'TextIndent'.
         * 
         * @return the value of the explicit attribute 'TextIndent'
         */
        virtual const IfcSizeSelect *getTextIndent() const;
        /**
         * Sets the value of the explicit attribute 'TextIndent'.
         * 
         * @param value
         */
        virtual void setTextIndent(const Step::RefPtr< IfcSizeSelect > &value);
        /**
         * Gets the value of the explicit attribute 'TextAlign'.
         * 
         */
        virtual IfcTextAlignment getTextAlign();
        /**
         * (const) Returns the value of the explicit attribute 'TextAlign'.
         * 
         * @return the value of the explicit attribute 'TextAlign'
         */
        virtual const IfcTextAlignment getTextAlign() const;
        /**
         * Sets the value of the explicit attribute 'TextAlign'.
         * 
         * @param value
         */
        virtual void setTextAlign(const IfcTextAlignment &value);
        /**
         * Gets the value of the explicit attribute 'TextDecoration'.
         * 
         */
        virtual IfcTextDecoration getTextDecoration();
        /**
         * (const) Returns the value of the explicit attribute 'TextDecoration'.
         * 
         * @return the value of the explicit attribute 'TextDecoration'
         */
        virtual const IfcTextDecoration getTextDecoration() const;
        /**
         * Sets the value of the explicit attribute 'TextDecoration'.
         * 
         * @param value
         */
        virtual void setTextDecoration(const IfcTextDecoration &value);
        /**
         * Gets the value of the explicit attribute 'LetterSpacing'.
         * 
         */
        virtual IfcSizeSelect *getLetterSpacing();
        /**
         * (const) Returns the value of the explicit attribute 'LetterSpacing'.
         * 
         * @return the value of the explicit attribute 'LetterSpacing'
         */
        virtual const IfcSizeSelect *getLetterSpacing() const;
        /**
         * Sets the value of the explicit attribute 'LetterSpacing'.
         * 
         * @param value
         */
        virtual void setLetterSpacing(const Step::RefPtr< IfcSizeSelect > &value);
        /**
         * Gets the value of the explicit attribute 'WordSpacing'.
         * 
         */
        virtual IfcSizeSelect *getWordSpacing();
        /**
         * (const) Returns the value of the explicit attribute 'WordSpacing'.
         * 
         * @return the value of the explicit attribute 'WordSpacing'
         */
        virtual const IfcSizeSelect *getWordSpacing() const;
        /**
         * Sets the value of the explicit attribute 'WordSpacing'.
         * 
         * @param value
         */
        virtual void setWordSpacing(const Step::RefPtr< IfcSizeSelect > &value);
        /**
         * Gets the value of the explicit attribute 'TextTransform'.
         * 
         */
        virtual IfcTextTransformation getTextTransform();
        /**
         * (const) Returns the value of the explicit attribute 'TextTransform'.
         * 
         * @return the value of the explicit attribute 'TextTransform'
         */
        virtual const IfcTextTransformation getTextTransform() const;
        /**
         * Sets the value of the explicit attribute 'TextTransform'.
         * 
         * @param value
         */
        virtual void setTextTransform(const IfcTextTransformation &value);
        /**
         * Gets the value of the explicit attribute 'LineHeight'.
         * 
         */
        virtual IfcSizeSelect *getLineHeight();
        /**
         * (const) Returns the value of the explicit attribute 'LineHeight'.
         * 
         * @return the value of the explicit attribute 'LineHeight'
         */
        virtual const IfcSizeSelect *getLineHeight() const;
        /**
         * Sets the value of the explicit attribute 'LineHeight'.
         * 
         * @param value
         */
        virtual void setLineHeight(const Step::RefPtr< IfcSizeSelect > &value);
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcTextStyleTextModel(Step::Id id, Step::SPFData *args);
        virtual ~IfcTextStyleTextModel();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcTextStyleTextModel &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcSizeSelect > m_textIndent;
        /**
         */
        Step::String m_textAlign;
        /**
         */
        Step::String m_textDecoration;
        /**
         */
        Step::RefPtr< IfcSizeSelect > m_letterSpacing;
        /**
         */
        Step::RefPtr< IfcSizeSelect > m_wordSpacing;
        /**
         */
        Step::String m_textTransform;
        /**
         */
        Step::RefPtr< IfcSizeSelect > m_lineHeight;

    };

}

#endif // IFC2X3_IFCTEXTSTYLETEXTMODEL_H
